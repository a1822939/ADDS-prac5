#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Sort.h"
#include <vector>


class BubbleSort : public Sort
{
private:

public:
    BubbleSort();
    std::vector<int> sort(std::vector<int> list);
    ~BubbleSort();
};


#endif
