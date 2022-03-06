/*
 * 选择法排序
 * 初始时在序列中找到最小（大）元素，放到序列的起始位置作为已排序序列；
 * 然后，再从剩余未排序元素中继续寻找最小（大）元素，放到已排序序列的末尾。以此类推，直到所有元素均排序完毕。
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

void SelectionSort(int *h, size_t len)
{
    int min, i, j;
    for (i = 0; i < len - 1; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (h[j] < h[min])
                min = j;
        }
        swap(h[i], h[min]);
    }

    return;
}

int main()
{
    const int n = 5;
    int arr[n] = {3, 1, 5, 2, 4};
    SelectionSort(arr, n);
    Print(arr, n);
    return 0;
}
