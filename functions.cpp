/*********************
Name: Darren Bowers
Coding 03
Purpose: Program to import a file from command line and analyze its contents.
**********************/

#include "functions.h"

int count_non_space(string line){
    int count = 0;
    int i = 0;
    while(line[i] != '\0'){
        if(line[i] >= 'a' && line[i] <= 'z' || line[i] >= 'A' && line[i] <= 'Z'){
            count++;
        }
        i++;
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
    int wordCount = 0;
    int i = 0;
    while (getline(fin, line)) {
        i++;
        if(line.size() == 0){
            cout << i-1 << ": [ blank Line ]" << endl;
        } else{
        wordCount = 1+count_spaces(line);
        cout << i-1 << ": " << line << " [" << count_non_space(line) << " letters, " << count_spaces(line) << " spaces, " << wordCount << " words]" << endl;
        }
    }
}
