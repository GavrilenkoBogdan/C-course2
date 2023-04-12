#include <iostream>
using namespace std;

bool isPrime(int x) {
    bool rez = true;
    for (int i = 2; i < x; i++)
        if (x % i == 0) rez = false;
    return rez;
}
int main()
{
    while(true){
        int x;
       
        cout << "Введіть число" << endl;
        cin >> x;
        isPrime(x);
       
        if (isPrime(x)){
           cout << "true" << endl;
            }
            else{
            cout << "false" << endl;
        }
    }

    return 0;
}