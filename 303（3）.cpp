#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
	cout << fixed << setprecision(2);
	cout << "Celsius    Fahrenheit   |   Fahrenheit     Celsius" << endl;
	cout << "---------------------------------------------------" << endl;
	for (double cel = 40.0; cel >= 31.0; cel -= 1.0) {
		double fah1 = celsius_to_fah(cel);
		double fah2 = 120.0 - (40.0 - cel) * 10.0;
		double cel2 = fahrenheit_to_cels(fah2);
		cout << setw(6) << cel << setw(12) << fah1;
		cout << "   |   " << setw(10) << fah2 << setw(10) << cel2 << endl;
	}
	return 0;
}
