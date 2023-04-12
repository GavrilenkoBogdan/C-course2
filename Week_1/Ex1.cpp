#include <iostream>

using namespace std;

int main()
{
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);
    int max;
    
    for(int j = 0; j < n; j++){
			if(*(vector + j) > * (vector + (j - 1)))
				max = *(vector + j);
		}
		
	cout << max;
}