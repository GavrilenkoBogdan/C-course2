#include <iostream>
using namespace std;

int monthLength(int year, int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) {
        return 29;
    } else {
        return daysInMonth[month - 1];
    }
}

int main(void) {
    for(int yr = 2000; yr < 2002; yr++) {
        for(int mo = 1; mo <= 12; mo++) {
            cout << monthLength(yr,mo) << " ";
        }
        cout << endl;
    }
    return 0;
}