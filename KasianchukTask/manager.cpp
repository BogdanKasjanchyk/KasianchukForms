#include "ManagerPanel.h"
#include "ConcertInputForm.h"
#include "registrationPanel.h"

#include "human.h"
#include "visitor.h"
#include "manager.h"
#include "singer.h"
#include "concert.h"

#include <msclr/marshal_cppstd.h> 
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

Manager manager;
Visitor visitor;
Concert concert;
Singer singer;
vector<Visitor> visitors;
vector<Concert*> concerts;

int id;
string filename;

// Manager

Manager::Manager() {
    this->name = "Степан";
    this->surname = "Петров";
    this->age = 22;
    this->sex = "Чоловік";
}

void Manager::addConcerts(vector<Concert*>& concerts, string location, string date, int ticketPrice, int i) {

    concerts[i]->set_location(location);
    concerts[i]->set_date(date);
    concerts[i]->set_ticketPrice(ticketPrice);

}

void Manager::receiveInfoAboutPickedConcerts(Concert& concert) {
    ifstream file("singerSchedule.txt");
    string concertName;

    cout << "Концерти, на які піде співак:" << endl;
    while (getline(file, concertName)) {
        cout << concertName << endl;
    }
}

void Manager::loadConcerts(vector<Concert*>& concerts) {

    try
    {
        Concert* masquarade = new Concert("Маскарад ляльок", "location", "date", 1500, 15, false);
        Concert* rock = new Concert("Рок-фестиваль", "location", "date", 25000, 25, false);
        Concert* opera = new Concert("Опера", "location", "date", 2344, 20, true);
        Concert* jazz = new Concert("Джазовий вечір", "location", "date", 2324, 10, false);
        Concert* orchestra = new Concert("Симфонічний оркестр", "location", "date", 3533, 30, true);

        concerts.push_back(masquarade);
        concerts.push_back(rock);
        concerts.push_back(opera);
        concerts.push_back(jazz);
        concerts.push_back(orchestra);
    }
    catch (const std::bad_alloc& e) {
        cerr << "Помилка виділення пам'яті: " << e.what() << '\n';
    }

}

void Manager::loadVisitors(vector<Visitor>& visitors, vector<Concert*>& concerts) {
    int ticket_id = rand(); // Встановлюємо ID квитка
    int balance = rand() % 101 + 100;

    Concert* concert = concerts[0]; // Вибираємо концерт для квитка
    Visitor jane("Jane", "Doe", "Female", 28, ticket_id, concert);
    ticket_id = rand();
    concert = concerts[1];
    Visitor alice("Alice", "Smith", "Female", 31, ticket_id, concert);
    ticket_id = rand();
    concert = concerts[2];
    Visitor bob("Bob", "Johnson", "Male", 35, ticket_id, concert);
    ticket_id = rand();
    concert = concerts[3];
    Visitor charlie("Charlie", "Brown", "Male", 33, ticket_id, concert);
    ticket_id = rand();
    concert = concerts[4];
    Visitor emily("Emily", "Davis", "Female", 30, ticket_id, concert);

}

void Manager::informSingerAboutConcert(Singer& singer, vector<Concert*>concerts) {
    singer.receiveConcertInfo(concerts);
}

void Manager::findUserByIdInFiles(string filename, int id, System::Windows::Forms::CheckedListBox^ checkedListBox1) {
    ifstream inFile(filename);
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            stringstream ss(line);
            string name, surname, sex, concertName;
            int age, ticketId;

            ss >> name >> surname >> age >> sex >> ticketId >> concertName;

            if (ticketId == id) {
                System::String^ userInfo = gcnew System::String(("Ім'я: " + name + ", Прізвище: " + surname + ", Вік: " + to_string(age) + ", Стать: " + sex + ", ID квитка: " + to_string(ticketId) + ", Назва концерту: " + concertName).c_str());
                checkedListBox1->Items->Add(userInfo);
            }
        }
        inFile.close();
    }
}

void Manager::findUserById(vector<Visitor>& visitors, int id) {
    for (Visitor& visitor : visitors) {
        for (Visitor::Ticket& ticket : visitor.tickets) {
            if (ticket.get_id() == id) {
                cout << "Ім'я: " << visitor.get_name() << endl;
                cout << "Прізвище: " << visitor.get_surname() << endl;
                cout << "Вік: " << visitor.get_age() << endl;
                cout << "Стать: " << visitor.get_sex() << endl;
                cout << "ID квитка: " << ticket.get_id() << endl;
                cout << "Назва концерту: " << ticket.get_concert()->get_concertName() << endl;
            }
        }
    }
}

void Manager::removeVisitorById(vector<Visitor>& visitors, int id) {
    for (int i = 0; i < visitors.size(); i++) {
        for (Visitor::Ticket& ticket : visitors[i].tickets) {
            if (ticket.get_id() == id) {
                visitors.erase(visitors.begin() + i);
                cout << "Відвідувач з ID " << id << " був видалений." << endl;
                return;
            }
        }
    }
}

void Manager::removeVisitorByIdinFile(string filename, int id, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::CheckedListBox^ checkedListBox1) {

    vector<string> filenames = { "masquarade.txt", "rock.txt", "symphony.txt", "jazz.txt", "opera.txt" };
    for (const string& filename : filenames) {
        ifstream inFile(filename);
        string line;
        vector<string> lines;

        if (inFile.is_open()) {
            while (getline(inFile, line)) {
                stringstream ss(line);
                string name, surname, sex, concertName;
                int age, ticketId;

                ss >> name >> surname >> age >> sex >> ticketId >> concertName;

                if (ticketId != id) {
                    lines.push_back(line);
                }
            }
            inFile.close();
        }

        // Видаляємо відмічені елементи з checkedListBox1
        for (int i = checkedListBox1->Items->Count - 1; i >= 0; i--) {
            if (checkedListBox1->GetItemChecked(i)) {
                checkedListBox1->Items->RemoveAt(i);
            }
        }

        ofstream outFile(filename);
        for (const string& line : lines) {
            outFile << line << endl;
        }
        outFile.close();
    }
}




void Manager::findUserByIdForSignIn(int id) {
    vector<string> filenames = { "masquarade.txt", "rock.txt", "symphony.txt", "jazz.txt", "opera.txt" };
    for (const string& filename : filenames) {
        ifstream inFile(filename);
        string line;

        if (inFile.is_open()) {
            while (getline(inFile, line)) {
                stringstream ss(line);
                string name, surname, sex, concertName;
                int age, ticketId;

                ss >> name >> surname >> age >> sex >> ticketId >> concertName;

                if (ticketId == id) {
                    cout << "Вітаємо, " << name << " " << endl;
                    cout << "ID квитка: " << ticketId << endl;
                    cout << "Назва концерту: " << concertName << endl;
                    return;
                }
            }
            inFile.close();
        }
    }
}

System::Void KasianchukTask::ManagerPanel::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
  
    if (checkedListBox1->Items->Count == 0)
    {
        label12->Show();
        return;
    }
    else {
        label12->Hide();
        id = Int32::Parse(textBox1->Text);
        manager.removeVisitorByIdinFile(filename, id, textBox1, checkedListBox1);
        MessageBox::Show(this, "Видалено", "Видалення успішне", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        if (checkedListBox1->Items->Count == 0)
        {
            label12->Show();
            return;
        }
    }
}

System::Void KasianchukTask::ManagerPanel::pictureBox2_Click(System::Object^ sender, System::EventArgs^ e)
{


    if (textBox1->Text != "")
    {
        int number = Convert::ToInt32(textBox1->Text);
        manager.findUserByIdInFiles("masquarade.txt", number, checkedListBox1);
        manager.findUserByIdInFiles("rock.txt", number, checkedListBox1);
        manager.findUserByIdInFiles("symphony.txt", number, checkedListBox1);
        manager.findUserByIdInFiles("jazz.txt", number, checkedListBox1);
        manager.findUserByIdInFiles("opera.txt", number, checkedListBox1);
    } 
    else
    {
        MessageBox::Show(this, "Не введено ID", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    if (checkedListBox1->Items->Count == 0)
    {
        label12->Show();
    }
    else
    {
        label12->Hide();
    }
}

System::Void KasianchukTask::registrationPanel::registrationPanel_Load(System::Object^ sender, System::EventArgs^ e)
{
    manager.loadConcerts(concerts); // Викликаємо метод для об'єкта
}

System::Void KasianchukTask::ManagerPanel::ManagerPanel_Load(System::Object^ sender, System::EventArgs^ e)
{
    label7->Show();
    manager.loadConcerts(concerts); 
}

System::Void  KasianchukTask::ManagerPanel::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    manager.isButton1Clicked = true;
    ConcertInputForm^ form = gcnew ConcertInputForm("Маскарад ляльок");
    form->ShowDialog();

}
System::Void  KasianchukTask::ManagerPanel::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    manager.isButton2Clicked = true;
    ConcertInputForm^ form = gcnew ConcertInputForm("Рок-фестиваль");
    form->ShowDialog();

}
System::Void  KasianchukTask::ManagerPanel::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    manager.isButton3Clicked = true;
    ConcertInputForm^ form = gcnew ConcertInputForm("Опера");
    form->ShowDialog();
    
}
System::Void  KasianchukTask::ManagerPanel::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    manager.isButton4Clicked = true;
    ConcertInputForm^ form = gcnew ConcertInputForm("Джазовий вечір");
    form->ShowDialog();
   
}
System::Void  KasianchukTask::ManagerPanel::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    manager.isButton5Clicked = true;
    ConcertInputForm^ form = gcnew ConcertInputForm("Симфонічний оркестр");
    form->ShowDialog();
   
}


System::Void  KasianchukTask::ConcertInputForm::buttonAddConcert_Click(System::Object^ sender, System::EventArgs^ e)
{

    if (textBoxLocation->Text == "" || textBoxDate->Text == "" || textBoxTicketPrice->Text == "")
    {
        MessageBox::Show(this, "Рядок пустий", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }

        String^ location = textBoxLocation->Text;
        String^ date = textBoxDate->Text;

        int ticketPrice = Convert::ToInt32(textBoxTicketPrice->Text);

        string locationStd(msclr::interop::marshal_as<std::string>(location));
        string dateStd(msclr::interop::marshal_as<std::string>(date));
        
        if (manager.isButton1Clicked) {

            manager.isButton1Clicked = false;
           
            manager.addConcerts(concerts, locationStd, dateStd, ticketPrice, 0);
        }
        if (manager.isButton2Clicked)
        {
            manager.isButton2Clicked = false;
           
            manager.addConcerts(concerts, locationStd, dateStd, ticketPrice, 1);
        }
        if (manager.isButton3Clicked)
        {
            manager.isButton3Clicked = false;
           
            manager.addConcerts(concerts, locationStd, dateStd, ticketPrice, 2);
        }
        if (manager.isButton4Clicked)
        {
            manager.isButton4Clicked = false;
           
            manager.addConcerts(concerts, locationStd, dateStd, ticketPrice, 3);
        }
        if (manager.isButton5Clicked)
        {
            manager.isButton5Clicked = false;
           
            manager.addConcerts(concerts, locationStd, dateStd, ticketPrice, 4);
        }

    concert.writeConcert(concerts);
    
    // Записуємо концерти в файл та інформуємо співака після введення всіх 5 концертів
    this->label1->Text = "Успішно записано!";
    manager.informSingerAboutConcert(singer, concerts);

       textBoxLocation->Clear();
    textBoxDate->Clear();
    textBoxTicketPrice->Clear();
}

System::Void  KasianchukTask::ManagerPanel::addVisitors_Click(System::Object^ sender, System::EventArgs^ e) {
    visitor.showVisitors(listBox1);
    if (listBox1->Items->Count == 0)
    {
        label7->Show();
    }
    else {
        label7->Hide();
    }
}



