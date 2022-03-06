/*
 * 派生类构造函数与析构函数的执行顺序
 */

#include <iostream>

using namespace std;

class Base1
{
    int x;

public:
    Base1(int a)
    {
        x = a;
        cout << "调用基类1的构造函数: x = " << x << endl;
    }
    ~Base1() { cout << "调用基类1的析构函数" << endl; }
};

class Base2
{
    int y;

public:
    Base2(int a)
    {
        y = a;
        cout << "调用基类2的构造函数: y = " << y << endl;
    }
    ~Base2() { cout << "调用基类2的析构函数" << endl; }
};

class Derived : public Base2, public Base1
{
    int z;
    Base2 b1;
    Base1 b2;

public:
    Derived(int a, int b) : Base1(a), Base2(20), b1(200), b2(a + b)
    {
        z = b;
        cout << "调用派生类的构造函数!\n";
    }
    ~Derived() { cout << "调用派生类的析构函数!\n"; }
};

int main()
{
    Derived c(100, 200);
    return 0;
}
