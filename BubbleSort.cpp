#include "BubbleSort.h"
#include <vector>

BubbleSort::BubbleSort()
{
}

BubbleSort::~BubbleSort()
{
}

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    bool swap = true;

    while (swap)
    {
        swap = false;
        for (int i = 1; i < list.size(); i++)
        {
            if (list.at(i - 1) > list.at(i))
            {
                std::swap(list.at(i - 1), list.at(i));
                swap = true;
            }
        }
    }

    return list;
}