#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "请输入两个正整数:" << endl;
	cin >> a >> b;
	int m = a,n = b;
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	int gcd = a;
	int lcm = (m* n) / gcd;
	cout << "最大公约数是:" << gcd<< endl;
	cout << "最小公倍数是:" << lcm << endl;
	return 0;
}