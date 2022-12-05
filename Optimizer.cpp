#include "Optimizer.hpp"
#include "Hannling.hpp"
#include "Days.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Hannling Optimizer\n------------------\n\n";
    cout << "Read from file? (y/n) ";
    char file = 0;
    cin >> file;

    vector<Hannling> hannlings{};
    if (file == 'y') {
        readHannlingFile(hannlings);
    }
}

void readHannlingFile(vector<Hannling> & hannlings) {

}

void promptForHannlings(vector<Hannling> & hannlings) {

}