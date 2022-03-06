/*
 * 回文判断
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char s[81], cr, *pi, *pj;
    int i, j, n;
    cin.getline(s, 81);
    n = strlen(s);
    pi = s;
    pj = s + n - 1; // pi指向串开始，pj指向最后
    while (*pi == ' ')
        pi++;
    while (*pj == ' ')
        pj--;
    while (pi < pj && *pi == *pj)
    {
        pi++;
        pj--;
    }
    if (pi < pj)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
