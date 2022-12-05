#ifndef OPTIMIZER_HPP
#define OPTIMIZER_HPP

#include <string>
#include <vector>
#include "Hannling.hpp"

// Reads info from data file
void readHannlingFile(std::vector<Hannling> & hannlings);

// Reads info from user
void promptForHannlings(std::vector<Hannling> & hannlings);

#endif