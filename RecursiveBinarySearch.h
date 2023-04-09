#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch
{
private:

public:
    RecursiveBinarySearch();

    bool search(std::vector<int> list, int target);

    ~RecursiveBinarySearch();
};

#endif