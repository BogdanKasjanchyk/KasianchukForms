#include "human.h"
#include "visitor.h"
#include "manager.h"
#include "concert.h"

#include "ManagerPanel.h"
#include "registrationPanel.h"

#include <msclr/marshal_cppstd.h> 
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;
using namespace System::IO;

// Visitors

Visitor::Visitor() {
    this->name = "Паша";
    this->surname = "Конашевич";
    this->sex = "Чоловік";
    this->age = 12;
}

Visitor::Visitor(string name, string surname, string sex, int age, int ticket_id, Concert* concert) {
    this->name = name;
    this->surname = surname;
    this->sex = sex;
    this->age = age;
    tickets.push_back(Ticket(ticket_id, concert));
}

void readFromFile(const string& filename, System::Windows::Forms::ListBox^ listBox) {
    ifstream readFile(filename);
    string line;
    while (getline(readFile, line)) {
        System::String^ lineStr = gcnew System::String(line.c_str());
        listBox->Items->Add(lineStr);
    }
    if (filename.empty())
    {
        System::String^ emptyStr = gcnew System::String("Немає даних");
        listBox->Items->Add(emptyStr);
    }
    readFile.close();
}



void Visitor::showVisitors(System::Windows::Forms::ListBox^ listBox) {
    readFromFile("masquarade.txt",listBox);
    readFromFile("rock.txt", listBox);
    readFromFile("opera.txt", listBox);
    readFromFile("jazz.txt", listBox);
    readFromFile("symphony.txt", listBox);

}

bool Visitor::doesVisitorExistInFile(int id) {
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
                    return true;
                }
            }
            inFile.close();
        }
    }

    return false;
}

System::Void KasianchukTask::registrationPanel::registerVisitor_Click(System::Object^ sender, System::EventArgs^ e)
{
    Manager manager;
    vector<Concert*> concerts;
    manager.loadConcerts(concerts);
    vector<Visitor> visitors;
    string name = msclr::interop::marshal_as<std::string>(textBoxName->Text);
    string surname = msclr::interop::marshal_as<std::string>(textBoxSurname->Text);
    String^ selectedSex = comboBox2->SelectedItem->ToString();
    string selectedSexStd = msclr::interop::marshal_as<std::string>(selectedSex);
    int age = (int)numericUpDown1->Value;

    int concertIndex = comboBox1->SelectedIndex;

    if (concertIndex >= concerts.size()) {
        MessageBox::Show(this, "Помилка", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }
    else {
        Concert* chosenConcert = concerts[concertIndex];
        srand(time(0));
        int ticket_id = rand() % 200;

        if (ticket_id < 0) {
            MessageBox::Show(this, "ID квитка не може бути від'ємним", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }

        Visitor visitor(name, surname, selectedSexStd, age, ticket_id, chosenConcert);

        visitors.push_back(visitor);

            string filename;
            if (concertIndex == 0) {
                filename = "masquarade.txt";
            }
            else if (concertIndex == 1) {
                filename = "rock.txt";
            }
            else if (concertIndex == 2) {
                filename = "opera.txt";
            }
            else if (concertIndex == 3) {
                filename = "jazz.txt";
            }
            else if (concertIndex == 4) {
                filename = "symphony.txt";
            }
            try {

                if (chosenConcert->get_ticketStatus() == 0)
                {
                    MessageBox::Show(this, "Вибачте, але всі квитки на цей концерт вже розкуплено.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    return;
                }
                else {

                    String^ filenameNet = gcnew String(filename.c_str());
                    StreamWriter^ writeFile = gcnew StreamWriter(filenameNet, true);
                    for (int i = 0; i < visitors.size(); i++)
                    {
                        writeFile->Write(gcnew String((visitors[i].get_name() + " ").c_str()));
                        writeFile->Write(gcnew String((visitors[i].get_surname() + " ").c_str()));
                        writeFile->Write(visitors[i].get_age().ToString() + " ");
                        writeFile->Write(gcnew String((visitors[i].get_sex() + " ").c_str()));
                        if (!visitors[i].tickets.empty()) {
                            writeFile->WriteLine(visitors[i].tickets[0].get_id().ToString() + " " + msclr::interop::marshal_as<System::String^>(visitors[i].tickets[0].get_concert()->get_concertName()));
                        }
                    }
                    writeFile->Close();

                }
            }
            catch (const std::exception& e) {
                cout << e.what() << endl;
               
            }
            MessageBox::Show(this, "Зареєстровано, занесено в базу", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

    }
}