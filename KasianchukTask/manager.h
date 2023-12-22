#pragma once

#include <string>
#include <vector>
#include <iostream>

class Concert;
class Human;
class Visitor;
class Singer;

using namespace std;

class Manager : virtual public Human {
private:

public:
    Manager();

    Concert* concert;
    vector<Concert*>concerts;

    bool isButton1Clicked = false;
    bool isButton2Clicked = false;
    bool isButton3Clicked = false;
    bool isButton4Clicked = false;
    bool isButton5Clicked = false;

    void display() override {
        cout << "Менеджер: " << name << ", Прізвище: " << surname << ", Вік: " << age << ", Стать: " << sex << endl;
    }

    void loadVisitors(vector<Visitor>& visitors, vector<Concert*>& concerts);
    void addConcerts(vector<Concert*>& concerts, string location, string date, int ticketPrice, int i);
    void loadConcerts(vector<Concert*>& concerts);

    void informSingerAboutConcert(Singer& singer, vector<Concert*>concerts);
    void receiveInfoAboutPickedConcerts(Concert& concert);

    void findUserByIdInFiles(string filename, int id, System::Windows::Forms::CheckedListBox^ checkedListBox1);
    void findUserById(vector<Visitor>& visitors, int id);
    void findUserByIdForSignIn(int id);

    void removeVisitorById(vector<Visitor>& visitors, int id);
    void removeVisitorByIdinFile(string filename, int id, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::CheckedListBox^ checkedListBox1);

    virtual ~Manager() override {}
};

