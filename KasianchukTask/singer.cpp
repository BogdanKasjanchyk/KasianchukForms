#include "human.h"
#include "singer.h"
#include "concert.h"
#include "manager.h"

#include "singerPanel.h"

#include <msclr/marshal_cppstd.h> 

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <list>
#include <map>

using namespace std;

//Singer

Singer::Singer() {
    this->name = "Тіль";
    this->surname = "Ліндеман";
    this->sex = "Чоловік";
    this->age = 58;
}

int Singer::get_fee() {
    return fee;
}

void Singer::set_fee(int new_fee) {
    fee = new_fee;
}

void Singer::chooseConcerts(vector<Concert*>& concerts, System::Windows::Forms::CheckedListBox^ checkedListBox1, System::Windows::Forms::ListBox^ ListBox1, System::Windows::Forms::DateTimePicker^ dateTimePicker1) {
    // Зберігаємо вибрані концерти в файл
    ofstream outFile("singerSchedule.txt", ios::trunc);

    for (int i = 0; i < checkedListBox1->Items->Count; i++) {
        if (checkedListBox1->GetItemChecked(i)) {
            // Отримуємо дату з DateTimePicker
            System::String^ yearStr = dateTimePicker1->Value.Year.ToString();
            System::String^ monthStr = dateTimePicker1->Value.ToString("MMMM");

            // Конвертуємо System::String^ в std::string
            msclr::interop::marshal_context context;
            string yearStd = context.marshal_as<std::string>(yearStr);
            string monthStd = context.marshal_as<std::string>(monthStr);

            // Додаємо вибрані концерти в ListBox1
            System::String^ concertInfo = checkedListBox1->Items[i]->ToString() + ", Дата: " + yearStr + ", Час: " + monthStr;
            ListBox1->Items->Add(concertInfo);

            // Записуємо вибрані концерти в файл
            outFile << "Концерт: " << context.marshal_as<std::string>(checkedListBox1->Items[i]->ToString()) << " -- День: " << yearStd << " -- Час: " << monthStd << endl;
        }
    }

    outFile.close();
}


void Singer::displayAndEditSchedule() {
    ifstream inFile("singerSchedule.txt");
    string line;
    int concertNumber;

    if (!inFile) {
        cout << "Не вдалося відкрити файл розкладу." << endl;
        return;
    }

    list<string> schedule;

    while (getline(inFile, line)) {
        cout << line << endl;
        schedule.push_back(line);
    }
    inFile.close();

    // Виводимо розклад
    for (const auto& concert : chosenConcerts) {
        cout << "День: " << concert.first << ", Концерт: " << concert.second->get_concertName() << endl;
    }

    cout << "Введіть номер концерту, який ви хочете редагувати, або 0, щоб завершити редагування." << endl;
    cin >> concertNumber;
    if (concertNumber == 0)
    {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
    while (concertNumber != 0) {
        string day, time;
        cout << "Введіть новий день для концерту " << concertNumber << ": ";
        cin >> day;
        cout << "Введіть новий час для концерту " << concertNumber << ": ";
        cin >> time;

        // Знаходимо відповідний рядок у списку і змінюємо його
        auto it = next(schedule.begin(), (concertNumber - 1) * 2);
        *it = "День: " + day + " -- Час: " + time + " -- Максимальна кількість відвідувачів: " + next(it, 1)->substr(next(it, 1)->rfind(' ') + 1);

        cout << "Введіть номер концерту, який ви хочете редагувати, або 0, щоб завершити редагування." << endl;
        cin >> concertNumber;
    }
    if (concertNumber == 0)
    {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }

    // Записуємо список назад у файл
    ofstream outFile("singerSchedule.txt", ios::trunc);
    for (const auto& line : schedule) {
        outFile << line << endl;
    }
    outFile.close();
}



void Singer::removeConcertFromList(Concert* concert) {
    for (auto it = chosenConcerts.begin(); it != chosenConcerts.end(); ++it) {
        if (it->second == concert) {
            chosenConcerts.erase(it);
            cout << "Концерт " << concert->get_concertName() << " видалено зі списку." << endl;
            return;
        }
    }
    cout << "Концерт " << concert->get_concertName() << " не знайдено в списку." << endl;
}

void Singer::receiveConcertInfo(vector<Concert*>concerts) {

    ifstream file("concert.txt");
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string concertName, location, date;

        if (line.find("Назва концерту:") != string::npos) {
            concertName = line.substr(line.find(":") + 2);
        }
        else if (line.find("Дата:") != string::npos) {
            date = line.substr(line.find(":") + 2);
        }
        else if (line.find("Локація:") != string::npos) {
            location = line.substr(line.find(":") + 2);
        }
    }
}


void Singer::showShortConcertInfo(vector<Concert*>concerts, System::Windows::Forms::ListBox^ checkedListBox1) {

    ifstream inFile("concert.txt");
    string line, concertName, location, date;
    while (getline(inFile, line)) {
        if (line.find("Назва концерту:") != string::npos) {
            concertName = line.substr(line.find(":") + 2);
        }
        else if (line.find("Дата:") != string::npos) {
            date = line.substr(line.find(":") + 2);
        }
        else if (line.find("Локація:") != string::npos) {
            location = line.substr(line.find(":") + 2);
        }
        else if (line.find("------------------------") != string::npos) {
            // Записуємо інформацію про концерт в один рядок в listBox
            System::String^ concertInfo = gcnew System::String(("Назва концерту: " + concertName + ", Дата: " + date + ", Локація: " + location).c_str());
            checkedListBox1->Items->Add(concertInfo);
            // Очищуємо змінні для наступного концерту
            concertName = "";
            date = "";
            location = "";
        }
    }
    inFile.close();
}

System::Void  KasianchukTask::singerPanel::singerPanel_Load(System::Object^ sender, System::EventArgs^ e)
{
    Singer singer;
    vector<Concert*>concerts;
    singer.showShortConcertInfo(concerts, checkedListBox1);
}
System::Void  KasianchukTask::singerPanel::editSchedule_Click(System::Object^ sender, System::EventArgs^ e) {
    Singer singer;
    vector<Concert*> concerts;
    label2->Text = "Успішно записано";
    singer.chooseConcerts(concerts, checkedListBox1, ListBox1, dateTimePicker1);
}

