#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"
#include <vector>


class QuickSort : public Sort
{
private:

public:
    QuickSort();
    std::vector<int> sort(std::vector<int> list);
    void quicksort(std::vector<int>& arr, int left, int right);
    ~QuickSort();
};


#endif