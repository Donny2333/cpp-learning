/*
 * 利用虚函数实现多态性
 */
#include <iostream>

using namespace std;

const float Pi = 3.14159;

class Point
{
    float x, y;

public:
    Point() {}
    Point(float i, float j)
    {
        x = i;
        y = j;
    }
    float area(void) { return 0.0; }
    // virtual float area(void) { return 0.0; }
};

class Circle : public Point // 类Point的派生类
{
    float radius;

public:
    Circle(float r) { radius = r; }
    float area(void) { return Pi * radius * radius; }
};

int main()
{
    Point *pp; // 基类指针，可以将派生类对象的地址赋给基类指针
    Circle c(5.4321);
    pp = &c;
    cout << pp->area() << endl; // 调用的是基类中有的公有函数
    return 0;
}
