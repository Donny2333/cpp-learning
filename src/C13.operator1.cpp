/*
 * 利用类的成员函数重载运算符
 */

#include <iostream>

using namespace std;

class Complex
{
    double real;
    double imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex &c2); // 声明重载运算符+的函数
    void display();
};

Complex Complex::operator+(Complex &c2) // 定义重载运算符+的函数
{
    Complex c;
    c.real = real + c2.real; // 实现两个复数的实部相加
    c.imag = imag + c2.imag; // 实现两个复数的虚部相加
    return c;
}

void Complex::display()
{
    cout << "(" << real << "," << imag << "i)" << endl; // 输出复数形式
}

int main()
{
    Complex c1(3, 4), c2(5, -10), c3;
    c3 = c1 + c2; // c1.operator+(c2)
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    cout << "c1 + c2 = ";
    c3.display();
    return 0;
}