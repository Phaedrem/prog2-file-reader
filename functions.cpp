/*********************
Name: Darren Bowers
Coding 03
Purpose: Program to import a file from command line and analyze its contents.
**********************/

#include "functions.h"

int count_characters(string line){
    int count = 0;
    while(line[count] != '\0'){
        count++;
    }
    return count;
}

void display_file(fstream &fin){
    string line;
    int character_count = 0;
    while (getline(fin, line)) {
        character_count = count_characters(line);
        cout << line << " [" << character_count << " chars]" << endl;
    }
}
