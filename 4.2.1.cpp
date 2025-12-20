#include <iostream>
#include <cstring>
using namespace std;
int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) return -1;
    for (int i = 0; i <= len2 - len1; i++) {
        const char* p1 = s1;
        const char* p2 = s2 + i;
        bool match = true;
        while (*p1 != '\0' && *p2 != '\0') {
            if (*p1 != *p2) {
                match = false;
                break;
            }
            p1++;
            p2++;
        }
        if (match) return i;
    }
    return -1;
}
int main() {
    char s1[100], s2[100];
    cout << "输入子串s1：";
    cin >> s1;
    cin.ignore();
    cout << "输入主串s2：";
    cin.getline(s2, 100);
    cout << "匹配下标：" << indexof(s1, s2) << endl;
    return 0;
}