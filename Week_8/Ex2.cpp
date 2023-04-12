#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
    bool rez = true;
    for (int i = 2; i < x; i++)
        if (x % i == 0) rez = false;
    return rez;
}
int main(void) {
    for (int i = 2; i <= 21; i++)
        if (isPrime(i))
            cout << i << " ";

    cout << endl;
    return 0;
}