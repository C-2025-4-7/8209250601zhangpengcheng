#include<iostream>
using namespace std;
int main() {
	char ch;
	cout << "请输入一个字符:" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		ch -= 32;
		cout <<"对应的大写字母是:" << ch << endl;
	}
	else {
		cout << "后继字符的ASCII码:" << int(ch + 1) << endl;
	}
	return 0;
}