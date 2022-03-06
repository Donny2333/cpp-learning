/*
 * 插入法排序
 * 对于一个数组A[0,n]的排序问题，假设认为数组在A[0,n-1]排序的问题已经解决了。
 * 考虑A[n]的值，从右向左扫描有序数组A[0,n-1]，直到第一个小于等于A[n]的元素，将A[n]插在这个元素的后面。
 * 时间复杂度：o(n^2)
 * 空间复杂度：o(1)
 */

#include <iostream>

using namespace std;

void Print(int *h, size_t len)
{
    for (int i = 0; i < len; i++)
        cout << h[i] << '\t';
    cout << endl;
}

void InsertSort(int *h, size_t len)
{
    int i, j;
    for (i = 1; i < len; i++)
        for (j = i; j > 0; j--)
            if (h[j] < h[j - 1])
                swap(h[j], h[j - 1]);
            else
                break;
    return;
}

int main()
{
    const int n = 5;
    int arr[n] = {3, 1, 5, 2, 4};
    InsertSort(arr, n);
    Print(arr, n);
    return 0;
}
