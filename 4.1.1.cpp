#include<iostream>
using namespace std;
int main() {
	int nums[10], distinct[10];
	int count = 0;
	cout << "Enter ten numbers: ";
	for (int i= 0; i < 10; i++) {
		cin>> nums[i];
		bool is_new = true;
		for (int j = 0; j < count; j++) {
			if (nums[i] == distinct[j]) {
				is_new = false;
				break;
			}
		}
		if (is_new) {
			distinct[count] = nums[i];
			count++;
		}
	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < count; i++) {
		cout << distinct[i] << " ";
	}
	cout << endl;
	return 0;
}