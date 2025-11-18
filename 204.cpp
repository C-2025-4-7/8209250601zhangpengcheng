#include<iostream>
using namespace std;
int main() {
	double a, b;
	char op;
	cout << "请输入竖式，形如1 + 2" << endl;
	cin >> a >> op >> b;
	switch (op) {
	case'+':
		cout << "结果" << a + b << endl;
		break;
	case'-':
		cout << "结果" << a - b << endl;
		break;
	case'*':
		cout << "结果" << a * b << endl;
		break;
	case'/':
		if (b == 0) {
			cout << "除数不能为0" << endl;
		}
		else {
			cout << "结果" << a / b << endl;
		}
		break;
	case'%':
		if (b == 0) {
			cout << "除数不能为0" << endl;
		}
		else {
			cout << "结果" << int(a) % int(b) << endl;
		}
		break;
	default:
		cout << "运算符非法" << endl;
		break;
	}
		return 0;
}