#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int args, char* argv[])
{
    srand(time(NULL));
    
    int paired, unpaired;
    
    int **mas = new int* [3];
    for (int count = 0; count < 3; count++)
        mas[count] = new int [3];
        
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mas[i][j] = (rand() % 10);
            if ((mas[i][i] % 2) == 0)
            {
                paired++;
            }
            else
            {
                unpaired++;
            }
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << '\t' << setprecision(1) << mas[i][j] << '\t';
        }
        cout << endl;
    }
    
    cout << "Main diagonale = ";
    for (int i = 0; i < 3; i++) {
        cout << mas[i][i];
    }
    cout << endl;
    
    cout << "Side diagonale = ";
    for (int i = 0; i < 3; i++) {
        cout << mas[i][3 - 1 - i];
    }
    cout << endl;
    
    cout << "paired = " << paired << endl;
    cout << "unpaired = " << unpaired << endl;

    
    for (int count = 0; count < 3; count++)
        delete mas;
    
    return 0;
    
}