#include <iostream>
#include "student.h"            
#include <cstring>
using namespace std;
void Student::display()         
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value(int n, const char* na, char s)
{
    num = n;
    memset(name, 0, sizeof(name));
    strncpy(name, na, sizeof(name) - 1);
    name[sizeof(name) - 1] = '\0';
    sex = s;
}