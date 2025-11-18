#include<iostream>
#include<string>
using namespace std;
int main() {
	string input;
	cout << "请输入一行字符" << endl;
	getline(cin, input);
	int letters= 0, digits = 0, spaces = 0, others = 0;
	for (char c : input) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			letters++;
		}
		else if (c >= '0' && c <= '9') {
			digits++;
		}
		else if (c == ' ') {
			spaces++;
		}
		else {
			others++;
		}
	}
	cout << "英文字母个数: " << letters << endl;
	cout<< "空格个数: " << spaces << endl;
	cout << "数字个数: " << digits << endl;
	cout << "其他字符个数: " << others << endl;
	return 0;
}