#include "concert.h"

#include "visitorPanel.h"

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

// Concert

double Concert::get_ticketPrice() {
    return this->ticketPrice;
}

Concert::Concert(string concertName, string location, string date, int maxVisitors, int ticketPrice, bool isSoldOut) {
    this->concertName = concertName;
    this->location = location;
    this->date = date;
    this->maxVisitors = maxVisitors;
    this->ticketPrice = ticketPrice;
    this->isSoldOut = isSoldOut;
}

void Concert::set_concertName(string concertName) {
    this->concertName = concertName;
}

void Concert::set_location(string location) {
    this->location = location;
}                                                       //Перевантаження функції

void Concert::set_location(char* location) {
    this->location = string(location);
}

string Concert::get_location() {
    return this->location;
}

void Concert::set_date(string date) {
    this->date = date;
}

int Concert::totalConcerts = 0;

string Concert::get_concertName() {
    return this->concertName;
}

string Concert::get_date() {
    return this->date;
}

void Concert::showConcert(vector<Concert*>& concerts, System::Windows::Forms::RichTextBox^ richTextBox1) {

    ifstream inFile("concert.txt");
    string name, location, date, line;
    while (getline(inFile, name)) {
        getline(inFile, location);
        getline(inFile, date);
        for (int i = 0; i < 4; i++) { // Пропускаємо наступні 4 рядки
            getline(inFile, line);
        }

        System::String^ nameNet = gcnew System::String(name.substr(28).c_str()); // Видаляємо "Назва концерту: " з назви
        System::String^ dateNet = gcnew System::String(date.substr(9).c_str()); // Видаляємо "Дата: " з дати
        System::String^ locationNet = gcnew System::String(location.substr(15).c_str()); // Видаляємо "Локація: " з локації

        richTextBox1->AppendText("Назва концерту: " + nameNet + "\n");
        richTextBox1->AppendText("Дата: " + dateNet + "\n");
        richTextBox1->AppendText("Локація: " + locationNet + "\n");
        richTextBox1->AppendText("                              \n");
    }
    inFile.close();

}

System::Void  KasianchukTask::visitorPanel::visitorPanel_Load(System::Object^ sender, System::EventArgs^ e) {
    Concert concert;
    vector<Concert*> concerts;
    concert.showConcert(concerts, richTextBox1);
}

void Concert::writeConcert(vector<Concert*>& concerts) {
    ofstream outFile("concert.txt", ios::trunc);
    int numConcerts = min(5, (int)concerts.size());
    for (int i = 0; i < numConcerts; i++) {
        outFile << "Назва концерту: " << concerts[i]->get_concertName() << endl;
        outFile << "Локація: " << concerts[i]->get_location() << endl;
        outFile << "Дата: " << concerts[i]->get_date() << endl;
        outFile << "Макс. кількість відвідувачів: " << concerts[i]->get_maxVisitors() << endl;
        outFile << "Ціна квитків: " << concerts[i]->get_ticketPrice() << endl;
        outFile << "Стан продажу: " << (concerts[i]->get_ticketStatus() ? "1" : "0") << endl;
        outFile << "------------------------" << endl;
    }

    outFile.close();
}

void Concert::set_maxVisitors(int maxVisitors) {
    this->maxVisitors = maxVisitors;
}

int Concert::get_maxVisitors() {
    return this->maxVisitors;
}

void Concert::set_ticketPrice(int ticketPrice) {
    this->ticketPrice = ticketPrice;
}

void Concert::set_ticketStatus(bool isSoldOut) {
    this->isSoldOut = isSoldOut;
}

bool Concert::get_ticketStatus() {
    return this->isSoldOut;
}