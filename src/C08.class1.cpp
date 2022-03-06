/*
 * 构造函数与析构函数
 */

#include <iostream>

using namespace std;

class A
{
    float x, y;

public:
    A(float a = 0, float b = 0)
    {
        x = a;
        y = b;
        cout << "调用了构造函数" << endl;
    }
    void Print(void) { cout << x << '\t' << y << endl; }
    ~A() { cout << "调用了析构函数" << endl; }
};

int main()
{
    cout << "进入main()函数" << endl;
    A *pa1;
    pa1 = new A[3]; // 开辟数组空间
    cout << "完成开辟数组空间" << endl;
    delete[] pa1; // 必须用[]删除开辟的空间
    cout << "退出main()函数" << endl;
    return 0;
}
