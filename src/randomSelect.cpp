#include <iostream>
#include "randomSelect.h"
#include <time.h>

using namespace std;

int randomSelectNumber(int end){
    srand(time(0));
    int randomNumber = rand() % end + 1;  // 0 to ((end-1)+1)
    return randomNumber;
}