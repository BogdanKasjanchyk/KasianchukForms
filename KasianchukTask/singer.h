#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <list>

using namespace std;

class Concert;
class Manager;

class Singer : virtual public Human
{
public:

    Singer();

    Singer& operator++() {
        fee += 3000;
        return *this;
    }

    Singer& operator--() {
        fee -= 3000;
        return *this;
    }

    Singer& operator+=(int amount) {
        fee += amount;
        return *this;
    }

    Singer& operator*=(int factor) {
        fee *= factor;
        return *this;
    }

    Singer& operator/=(int factor) {
        fee /= factor;
        return *this;
    }

    list<pair<int, Concert*>> chosenConcerts;

    int get_fee();
    void set_fee(int new_fee);

    void receiveConcertInfo(vector<Concert*>concerts);
    void receiveConcertInfoInFile(string filename);

    void removeConcertFromList(Concert* concert);
    void displayAndEditSchedule();
    void showShortConcertInfo(vector<Concert*>concerts, System::Windows::Forms::ListBox^ listBox1);

    void chooseConcerts(vector<Concert*>& concerts, System::Windows::Forms::CheckedListBox^ checkedListBox1, System::Windows::Forms::ListBox^ ListBox1, System::Windows::Forms::DateTimePicker^ dateTimePicker1);

    void display() override {
        cout << "Співак: " << name << ", Прізвище: " << surname << ", Вік: " << age << ", Стать: " << sex << endl << endl;
    }

    ~Singer() override {}

private:
    int fee;
};

