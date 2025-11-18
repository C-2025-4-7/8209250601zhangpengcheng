#include<iostream>
using namespace std;
int main() {
	double price = 0.8;
	int totalApples = 0;
	double totalCost = 0;
	int days = 0;
	int todayApples = 2;
	while(totalApples+todayApples <= 100) {
		days++;
		totalApples += todayApples;
		totalCost += todayApples * price;
		todayApples *= 2;
	}
	double averageCost = totalCost / days;
	cout << "每天平均花费：" << averageCost << "元" << endl;
	cout << "总天数：" << days << "天" << endl;
	cout << "总苹果数：" << totalApples << "个" << endl;
	return 0;
}