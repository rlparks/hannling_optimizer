#ifndef OPTIMIZER_HPP
#define OPTIMIZER_HPP

#include <string>
#include <vector>
#include "Days.hpp"
#include "Hannling.hpp"

// Reads info from data file
void readHannlingFile(std::vector<Hannling> & hannlings);

// Reads info from user
void promptForHannlings(std::vector<Hannling> & hannlings);

// Stores info from prompt into a readable file
void storeHannlingFile(std::vector<Hannling> hannlings);

// Returns the matching enum value of the day string
Days mapStrToDay(std::string dayString);

#endif