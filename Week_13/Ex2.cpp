#include <iostream>
#include <string>
#include <math.h>

using namespace std;
class Fraction {
public:
	Fraction(int numerator1, int denominator1);
	string toString();
	double toDouble();
private:
	int numerator;
	int denominator;
	double result = numerator / denominator;
};
Fraction::Fraction(int numerator1, int denominator1) {
	numerator = numerator1;
	denominator = denominator1;
}
string Fraction :: toString() {
	
	if (numerator%denominator == 0) return to_string(numerator / denominator);
	else if (abs(numerator) > abs(denominator)) {
		if (numerator * denominator < 0) return (to_string(((int)(double(numerator) / denominator))) + " " + to_string(abs(numerator - ((int)(double(numerator) / denominator)) * denominator)) + "/" + to_string(abs(denominator)));
		else return (to_string((int)(double(numerator) / denominator)) + " " + to_string((numerator - ((int)(double(numerator) / denominator)) * denominator)) + "/" + to_string(denominator));
	}
	else {
		return (to_string(numerator)+"/"+to_string(denominator));
	}
}
double Fraction::toDouble() {
	return (double)numerator / denominator;
}

int main(void) {
	r:int num = 0, den=0;
	string input = "",temp;
	getline(cin,input);
	temp = input;
	temp.erase(temp.find("/"));
	input.erase(0, input.find("/")+1);
	num = stoi(temp);
	den = stoi(input);
	Fraction fraction(num, den);
	cout << fraction.toString() << " is "<< fraction.toDouble() << " in decimal" << endl;
	goto r;
	return 0;
}