#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int args, char* argv[])
{
    srand(time(NULL));
    float *mas = new float [10];
    
    int plus;
    int minus;
    
    cout << "mas= " << endl;
    for (int i = 0; i < 10; i++) {
        mas[i] = 0.1 * (rand() % 41 - 20);
        
        if(mas[i] > 0)
        plus++;
        else
        minus++;
        
        cout << setprecision(3) << mas[i] << endl;
    }
    
    cout << "plus = " << plus << endl;
    cout << "minus = " << minus << endl;
    
    delete [] mas;
    
    return 0;
}
