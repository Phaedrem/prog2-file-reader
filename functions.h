/*********************
Name: Darren Bowers
Coding 03
Purpose: Program to import a file from command line and analyze its contents.
**********************/

#ifndef COMMANDLINE_FUNCTIONS_H
#define COMMANDLINE_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::fstream;
using std::string;

int count_characters(string);
void display_file(fstream&);

#endif //COMMANDLINE_FUNCTIONS_H

