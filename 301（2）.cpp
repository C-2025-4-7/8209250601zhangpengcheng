#include<iostream>
using namespace std;
void gcd_lcm(int m, int n, int& g, int& l) {
	int a = m, b = n;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	g = a;
	l=(m * n) / g;
}
int main() {
	int m,n, g, l;
	cout << "请输入两个自然数m和n：";
	cin >> m >> n;
	gcd_lcm(m, n, g, l);
	cout << "最大公约数为：" << g << endl;
	cout << "最小公倍数为：" << l << endl;
	return 0;

}