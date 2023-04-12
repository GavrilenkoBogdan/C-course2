#include <iostream>
using namespace std;

bool isLeap(int year) {
    bool result = false;
    if(year % 4 == 0)result=true;
    return result;
}

int main(void) {
    for(int yr = 1995; yr < 2007; yr++)
    cout << yr << " -> " << isLeap(yr) << endl;
    return 0;
}