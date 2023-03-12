/*
 * i++ 与 ++i 的区别
 *
 * i++：先赋值后计算
 * 例如：a = i++;
 * 相当于：a = i, i = i + 1;
 *
 * ++i：先计算后赋值
 * 例如：a = ++i;
 * 相当于：i = i + 1, a = i;
 *
 * 所以：i++ 不能作为赋值表达式的左值，而 ++i 可以
 */

#include <iostream>

using namespace std;

int main()
{
    int i, j;

    i = 0, j = 0;
    ++i = j++;
    cout << "i = " << i << '\t' << "j = " << j << endl;

    i = 0, j = 0;
    ++i = ++j;
    cout << "i = " << i << '\t' << "j = " << j << endl;

    // i++ is an expression, so it cannot be assigned.
    // i++ = j++;   // error
    // i++ = ++j;   // error

    return 0;
}