#include <iostream>

#include "Optimizer.hpp"
#include "Hannling.hpp"

using namespace std;

Hannling::Hannling() {

}

// Returns true if there are no enemies working a shift at the same time
bool Hannling::canWork(Hannling schedule[7][4], Days day, int shift) {
    if (shift % 2 == 0) {
        return this->isFriend(&schedule[day][shift + 1]) && this->isAvailable(day);
    } else {
        return this->isFriend(&schedule[day][shift - 1]) && this->isAvailable(day);
    }
}

// Returns true if potentialFriend is not in enemies
bool Hannling::isFriend(Hannling * potentialFriend) {
    bool friendHannling = true;
    if (potentialFriend != NULL) {
        for (int i = 0; i < this->enemies.size(); i++) {
            if (this->enemies[i] == *potentialFriend) {
                friendHannling = false;
            }
        }
    }

    return friendHannling;
}

// Returns true if day is not on blacklist
bool Hannling::isAvailable(Days day) {
    bool canWork = true;

    for (int i = 0; i < this->dayBlacklist.size(); i++) {
        if (this->dayBlacklist[i] == day) {
            canWork = false;
        }
    }

    return canWork;
}