#ifndef HANNLING_HPP
#define HANNLING_HPP

#include <vector>
#include <string>
#include "Optimizer.hpp"

class Hannling {
    std::vector<Hannling> enemies;
    std::vector<Days> dayBlacklist;

    public:
        std::string name;
        bool canWork(Hannling schedule[7][4], Days day, int shift);
        bool isFriend(Hannling * potentialFriend);
        bool operator==(const Hannling rhs) {
            return this->name == rhs.name;
        }
        bool isAvailable(Days day);
};

#endif