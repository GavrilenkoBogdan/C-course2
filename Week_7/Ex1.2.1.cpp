#include <iostream>
using namespace std;

bool isLeap(int year);int monthLength(int year, int month);
int main(void) {
    for(int yr = 2000; yr < 2002; yr++) {
    for(int mo = 1; mo <= 12; mo++)
        cout << monthLength(yr,mo) << " ";
        cout << endl;
    }   
    return 0;
}
bool isLeap(int year){
    bool result = false;
    if(year % 4 == 0)result=true;
    return result;
}
int monthLength(int year, int month) {
    int countOfDays;
    switch (month) {
    case 1: countOfDays= 31;break;
    case 2: if(isLeap(year)==true) countOfDays= 29;else countOfDays= 28; break;
    case 3: countOfDays= 31;break;
    case 4: countOfDays= 30;break;
    case 5: countOfDays= 31;break;
    case 6: countOfDays= 30;break;
    case 7: countOfDays= 31;break;
    case 8: countOfDays= 31;break;
    case 9: countOfDays= 30;break;
    case 10: countOfDays= 31;break;
    case 11: countOfDays= 30;break;
    case 12: countOfDays=31;break;
    }
    return countOfDays;
}