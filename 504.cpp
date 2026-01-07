#include<iostream>
using namespace std;
class Student
{
public:
    int id;       
    double score;  
    Student(int i = 0, double s = 0.0)
    {
        id = i;
        score = s;
    }
};

void max(Student* p, int n)
{
    Student* maxPtr = p; 
    for (int i = 1; i < n; i++)
    {
        if ((p + i)->score > maxPtr->score)
        {
            maxPtr = p + i;
        }
    }
    cout << "最高成绩为：" << maxPtr->score << endl;
    cout << "对应的学号为：" << maxPtr->id << endl;
}

int main()
{
    Student studs[5] = {
        Student(101, 85.5),
        Student(102, 92.0),
        Student(103, 78.3),
        Student(104, 95.8),
        Student(105, 88.6)
    };
    max(studs, 5);
    return 0;
}