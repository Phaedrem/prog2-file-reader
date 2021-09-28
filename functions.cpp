/*********************
Name: Darren Bowers
Coding 03
Purpose: Program to import a file from command line and analyze its contents.
**********************/

#include "functions.h"

int count_non_space(string line){
    int count = 0;
    while(line[count] != '\0'){
        count++;
    }
    return count;
}

int count_spaces(string line){
    int spaceCount = 0;
    int i = 0;
    while(line[i] != '\0'){
        if(line[i] == ' '){
            spaceCount++;
        }
        i++;
    }
    return spaceCount;
}

void display_file(fstream &fin){
    string line;
    int character_count = 0;
    while (getline(fin, line)) {
        if(line.size() == 0){
            cout << "[ blank Line ]" << endl;
        } else{
        character_count = count_non_space(line)-count_spaces(line);
        cout << line << " [" << character_count << " letters, " << count_spaces(line) << " spaces, " << endl;
        }
    }
}
