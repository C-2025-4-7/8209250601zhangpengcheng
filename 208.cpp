#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a;
    cout << "请输入一个数：";
    cin >> a;
    if (a < 0) {
        cout << "负数没有实数平方根" << endl;
        return 0;
    }
    double x0 = a, x1 = (x0 + a / x0) / 2;
    while (fabs(x1 - x0) >= 1e-5) {
        x0 = x1;
        x1 = (x0 + a / x0) / 2;
    }
    cout << a << "的平方根为：" << x1 << endl;
    return 0;
}