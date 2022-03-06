/*
 * 冒泡法排序
 * 冒泡排序在扫描过程中两两比较相邻记录，如果反序则交换，
 * 最终，最大记录就被“沉到”了序列的最后一个位置，
 * 第二遍扫描将第二大记录“沉到”了倒数第二个位置，
 * 重复上述操作，直到n-1 遍扫描后，整个序列就排好序了。
 * 时间复杂度：o(n)
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

void BubbleSort(int *h, size_t len)
{
    bool didSwap;
    for (int i = len - 1; i > 0; i--)
    {
        didSwap = false;
        for (int j = 0; j < i; j++)
            if (h[j] > h[j + 1])
            {
                swap(h[j], h[j + 1]);
                didSwap = true;
            }
        if (!didSwap)
            return;
    }
}

int main()
{
    const int n = 5;
    int arr[n] = {3, 1, 5, 2, 4};
    BubbleSort(arr, n);
    Print(arr, n);
    return 0;
}
