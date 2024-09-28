#include <iostream>
#include "src/randomSelect.h"

using namespace std;

int exampleFunction(int range){
    // Range is the end number (inclusive)
    int x = randomSelectNumber(100);
    return x;
}

int main(){
    int range = 10; // random number between 0-10 (both inclusive)
    int x = exampleFunction(10);
    cout << x;
}

// Compile prompt `cd "PATH TO FOLDER" ; if ($?) { g++ example.cpp src/randomSelect.cpp -o example } ; if ($?) { .\example }`