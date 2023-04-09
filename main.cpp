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

    BubbleSort s1;
    QuickSort s2;
    RecursiveBinarySearch s3;

    vector<int> list;
    string input_string;
    int temp;

    getline(cin, input_string);
    stringstream ss(input_string);

    while (ss >> temp)
    {
        list.push_back(temp);
        if (ss.peek() == ' ' || ss.peek() == '\n' || ss.peek() == '\r')
        {
            ss.ignore();
        }
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

    for (int i = 0; i < list.size()-1; i++)
    {
        
        cout << sortedList[i] << " ";
    }
    cout<<sortedList[list.size()];


    return 0;
}
