#include <iostream>
using namespace std;
int main() {
    const int SIZE = 100;
    bool lockers[SIZE] = { false }; 
    for (int student = 1; student <= SIZE; student++) {
        for (int locker = student - 1; locker < SIZE; locker += student) {
            lockers[locker] = !lockers[locker]; 
        }
    }
    cout << "开着的存物柜号码：";
    for (int i = 0; i < SIZE; i++) {
        if (lockers[i]) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    return 0;
}