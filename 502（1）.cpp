#include <iostream>
#include "student.h"           
int main()
{
    Student stud;                // 定义对象
    Student stud1;
    stud.set_value(1001, "ZhangSan", 'm'); // 调用set_value函数赋初值
    stud1.set_value(007, "tcg", 'm');
    stud.display();              // 执行stud对象的display函数
    stud1.display();
    return 0;
}