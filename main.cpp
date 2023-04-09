#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include<iostream>
using namespace std;

int main()
{

    BubbleSort s1;
    QuickSort s2;
    RecursiveBinarySearch s3;

    vector<int> list = {1, 3, 5, 4, -5, 100, 7777, 2014};


    vector<int> sortedList = s2.sort(list);


    cout<<s3.search(sortedList, 7777)<<endl;



    return 0;
}
