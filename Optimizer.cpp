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

        cout << "Enter blacklist days separated by a space (wed thu fri sat sun mon tue): ";
        string days{};
        getline(cin, days);
        while (days.length() > 2) {
            string day = days.substr(0, 3);
            days.erase(0, 4);
        }

        hannlings.push_back(newHannling);
    }
}