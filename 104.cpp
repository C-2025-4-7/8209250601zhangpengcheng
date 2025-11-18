#include<iostream>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;
	double realNum = 123.789;
	cout << "实数" << realNum << "转换为int:" << dec << static_cast<int>(realNum) << endl;
	return 0;
}