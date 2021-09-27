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
            cout << "invalid filename: " << argv[1] << endl;
        }
        myfile.close();
    } else {
        cout << "usage: " << argv[0] << " filename" << endl;
    }

    return 0;
}

