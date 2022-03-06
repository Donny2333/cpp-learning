/*
 * 包含转换构造函数、运算符重载函数和类型转换函数的程序
 */

#include <iostream>

using namespace std;

class Complex
{
    double real;
    double imag;

public:
    Complex() // 默认构造函数，无形参
    {
        real = 0;
        imag = 0;
    }
    Complex(double r) // 转换构造函数，一个形参
    {
        real = r;
        imag = 0;
    }
    Complex(double r, double i) // 实现初始化的构造函数，两个形参
    {
        real = r;
        imag = i;
    }
    // operator double() { return real; } // 类型转换函数，无形参
    friend Complex operator+(Complex c1, Complex c2); // 重载函数作为友元函数
    void display();
};

Complex operator+(Complex c1, Complex c2) // 定义重载运算符+的函数
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

void Complex::display()
{
    cout << "(" << real << "," << imag << "i)" << endl; // 输出复数形式
}

int main()
{
    Complex c1(3, 4), c2(5, -10), c3;
    c3 = c1 + 2.5;
    // operator+(c1, Complex(2.5))
    // operator+(double(c1), 2.5)
    c3.display();
    c3 = 1.5 + c2; // operator+(Complex(1.5), c2)
    c3.display();
    return 0;
}
