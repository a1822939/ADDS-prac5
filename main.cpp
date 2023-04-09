#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    QuickSort s2;
    RecursiveBinarySearch s3;

    vector<int> list;
    string input;
    getline(cin, input);
    istringstream iss(input);

    int num;
    while (iss >> num)
    {
        list.push_back(num);
    }

    vector<int> sortedList = s2.sort(list);

    if (s3.search(sortedList, 1))
    {
        cout << "true ";
    }
    else
    {
        cout << "false ";
    }

    for (int i = 0; i < sortedList.size(); i++)
    {

        cout << sortedList[i] << " ";
    }

    return 0;
}
