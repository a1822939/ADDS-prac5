#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include <vector>
#include<iostream>
using namespace std;

int main()
{
    BubbleSort s1;
    QuickSort s2;

    vector<int> list = {5, 3, 6, 2, 6, 8, 9, 2, 1, 13, 6, 0};

    vector<int> newList;

    newList = s2.sort(list);

    for (int i = 0; i < newList.size(); i++)
    {
            cout << newList.at(i) << endl;
    }

    return 0;
}
