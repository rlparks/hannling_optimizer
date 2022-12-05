#include "Optimizer.hpp"
#include "Hannling.hpp"
#include "Days.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "Hannling Optimizer <3\n---------------------\n\n";
    cout << "Read from file? (y/n) ";
    char file = 0;
    cin >> file;

    vector<Hannling> hannlings{};
    if (file == 'y') {
        readHannlingFile(hannlings);
    } else {
        promptForHannlings(hannlings);
    }
}

void readHannlingFile(vector<Hannling> & hannlings) {

}

void promptForHannlings(vector<Hannling> & hannlings) {
    cout << "Number of Hannlings (including yourself): ";
    int numHannlings = 0;
    cin >> numHannlings;

    for (int i = 0; i < numHannlings; i++) {
        cout << "Hannling " << i + 1 << ":\n";
        Hannling newHannling{};

        cout << "Hannling name: ";
        cin >> newHannling.name;
        cin.ignore();

        cout << "Enter blacklist days separated by a space (wed thu fri sat sun mon tue): ";
        string days{};
        getline(cin, days);
        while (days.length() > 2) {
            string day = days.substr(0, 3);
            days.erase(0, 4);
            newHannling.dayBlacklist.push_back(mapStrToDay(day));
        }

        hannlings.push_back(newHannling);
    }
}

Days mapStrToDay(std::string dayString) {
    if (dayString == "wed") {
        return wed;
    } else if (dayString == "thu") {
        return thu;
    } else if (dayString == "fri") {
        return fri;
    } else if (dayString == "sat") {
        return sat;
    } else if (dayString == "sun") {
        return sun;
    } else if (dayString == "mon") {
        return mon;
    } else if (dayString == "tue") {
        return tue;
    }

    return wed; // hope this never happens :)
}