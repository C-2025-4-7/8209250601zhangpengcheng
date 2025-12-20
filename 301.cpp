#include<iostream>
using namespace std;
int gcd(int m, int n) {
	while (n != 0) {
		int temp = n;
		n = m % n;
		m = temp;
	}
	return m;
}
int main() {
	int m, n;
	cout << "请输入两个自然数m,n:" << endl;
	cin >> m >> n;
	cout << "最大公约数为：" << gcd(m, n) << endl;
	return 0;
}