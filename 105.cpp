#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double fahrenheit;
	cout << "请输入华氏温度：" << endl;
	cin >> fahrenheit;
	double celsius = (fahrenheit - 32) * 5.0 / 9.0;
	cout << "对应的摄氏温度是：" << fixed << setprecision(2) << celsius << endl;
	return 0;
}