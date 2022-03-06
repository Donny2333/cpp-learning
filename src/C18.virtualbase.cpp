/*
 * 虚基类
 */
#include <iostream>

using namespace std;

// 虚基类
class A
{
protected:
    int x;

public:
    A() { x = 1000; }
    virtual void print() = 0; // 定义纯虚函数
};

// 派生类
class B : public A
{
private:
    int y;

public:
    B() { y = 2000; }
    void print() { cout << "y =" << y << endl; } // 重新定义纯虚函数
};

// 派生类
class C : public A
{
    int z;

public:
    C() { z = 3000; }
    void print() { cout << "z =" << z << endl; } // 重新定义纯虚函数
};

int main()
{
    A *pa;
    // A a; // 非法：虚基类不能定义对象
    B b;
    C c;
    pa = &b;
    pa->print();
    pa = &c;
    pa->print();
    return 0;
}
