#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入三角形的三条边" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) 
	{
		double perimeter = a + b + c;
		cout << "三角形的周长为：" << perimeter << endl;
		if (a== b || b == c || a ==c)
		{
			cout << "是等腰三角形" << endl;
		}
		else 
		{
			cout << "不是等腰三角形" << endl;
		}
	}
	else 
	{
		cout << "不能构成三角形" << endl;
	}
	return 0;
}