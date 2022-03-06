/*
 * sizeof
 */

#include <iostream>

using namespace std;

int main()
{
    short s = 1;        // 短整型
    int i = 10;         // 整型
    long l = 10;        // 长整型
    float f = 3.14;     // 单精度浮点型
    double d = 3.1415;  // 双精度浮点型
    char c = 'a';       // 字符型
    bool b = 0;         // 布尔型

    cout << "sizeof(short) = " << sizeof(s) << endl;
    cout << "sizeof(int) = " << sizeof(i) << endl;
    cout << "sizeof(long) = " << sizeof(l) << endl;
    cout << "sizeof(float) = " << sizeof(f) << endl;
    cout << "sizeof(double) = " << sizeof(d) << endl;
    cout << "sizeof(char) = " << sizeof(c) << endl;
    cout << "sizeof(bool) = " << sizeof(b) << endl;

    return 0;
}
