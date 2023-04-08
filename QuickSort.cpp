#include "QuickSort.h"
#include <vector>

QuickSort::QuickSort()
{
}

QuickSort::~QuickSort()
{
}

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    quicksort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quicksort(std::vector<int> &list, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int pivotIndex = left + 2;
    if (right - left + 1 < 3)
    {
        pivotIndex = left;
    }
    int pivotValue = list[pivotIndex];
    std::swap(list[pivotIndex], list[right]);
    int storeIndex = left;
    for (int i = left; i < right; i++)
    {
        if (list[i] < pivotValue)
        {
            std::swap(list[i], list[storeIndex]);
            storeIndex++;
        }
    }
    std::swap(list[storeIndex], list[right]);
    quicksort(list, left, storeIndex - 1);
    quicksort(list, storeIndex + 1, right);
}