#ifndef HANNLING_HPP
#define HANNLING_HPP

#include <vector>
#include <string>
#include "Days.hpp"

class Hannling {
    public:
        std::string name;
        std::vector<std::string> enemies;
        std::vector<Days> dayBlacklist;

        bool canWork(Hannling schedule[7][4], Days day, int shift);
        bool isFriend(Hannling * potentialFriend);
        bool operator==(const Hannling rhs) {
            return this->name == rhs.name;
        }
        bool isAvailable(Days day);
};

#endif