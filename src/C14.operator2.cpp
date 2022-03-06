/*
 * 利用友元函数重载运算符
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
    friend Complex operator+(Complex &c1, Complex &c2); // 重载函数作为友元函数
    void display();
};

Complex operator+(Complex &c1, Complex &c2) // 定义重载运算符+的函数
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
    // c1.operator+(c2)
    // operator+(c1, c2)
    c3 = c1 + c2; 
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    cout << "c1 + c2 = ";
    c3.display();
    return 0;
}