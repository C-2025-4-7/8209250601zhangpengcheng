#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int parseHex(const char* const hexString) {
    int result = 0;
    const char* p = hexString;
    while (*p != '\0') {
        char c = toupper(*p);  
        if (c >= '0' && c <= '9') {
            result = result * 16 + (c - '0');
        }
        else if (c >= 'A' && c <= 'F') {
            result = result * 16 + (c - 'A' + 10);
        }
        p++; 
    }
    return result;
}
int main() {
    char hex[100];
    cout << "输入16进制字符串：";
    cin >> hex;
    cout << "对应的10进制数：" << parseHex(hex) << endl;
    return 0;
}