#include "RecursiveBinarySearch.h"
#include <vector>

RecursiveBinarySearch::RecursiveBinarySearch()
{
}

RecursiveBinarySearch::~RecursiveBinarySearch()
{
}

bool RecursiveBinarySearch::search(std::vector<int> list, int target)
{
    if (list.size() == 1)
    {
        if (list[0] == target)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int midPointIndex = (list.size()/2);
    std::vector<int>::const_iterator first;
    std::vector<int>::const_iterator last;

    if (target < list[midPointIndex])
    {
        first = list.begin();
        last = list.begin()+midPointIndex;
    }
    else if (target > list[midPointIndex])
    {
        first = list.begin()+midPointIndex+1;
        last = list.end();
    }
    else if (target == list[midPointIndex])
    {
        return true;
    }

    std::vector<int> newList(first, last);
    return search(newList, target);
}