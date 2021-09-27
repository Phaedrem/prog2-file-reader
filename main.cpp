/*********************
Name: Darren Bowers
Coding 03
Purpose: Program to import a file from command line and analyze its contents.
**********************/


#include "main.h"

int main(int argc, char** argv) {
    fstream myfile;
    if(argc == 2){
        myfile.open(argv[1]);
        if(myfile.is_open()){
            display_file(myfile);    
        } else {
            cout << "file doesn't exist" << endl;
        }
        myfile.close();
    } else {
        cout << "it didn't work" << endl;
    }

    return 0;
}

