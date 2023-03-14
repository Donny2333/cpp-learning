/*
 * 假定K是一个类名，并有定义“K k; int j;”，已知K中重载了操作符()，
 * 且语句“j = k(3)” 和 “k(5) = 99” 都能顺利执行，说明该操作符函数的原型只可能是？
 * A. K operator () (int);
 * B. int operator () (int &);
 * C. int & operator() (int);
 * D. K & operator() (int);
 */

#include <iostream>

using namespace std;

class K
{
private:
    int a[10];

public:
    // K operator () (int) {}        // A
    // int operator () (int &) {}    // B
    // int & operator() (int) {}     // C
    // K & operator() (int) {}       // D
};

int main()
{
    K k;
    int j = 0;

    // j = k(3);
    // k(5) = 99;

    return 0;
}
