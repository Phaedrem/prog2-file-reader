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
        cout << "it worked" << endl;
        myfile.close();
    } else {
        cout << "it didn't work" << endl;
    }

    return 0;
}

