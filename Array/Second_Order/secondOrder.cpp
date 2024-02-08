// Find the second largest and the second smallest element in an array

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
vector<int> getFirstOrderElements(int n, vector<int> arr)
{

    vector<int> firstOrder{arr[0], arr[0]};

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > firstOrder[0])
        {
            firstOrder[0] = arr[i];
        }
        else if (arr[i] < firstOrder[1])
        {
            firstOrder[1] = arr[i];
        }
    }
    return firstOrder;
}
vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // Write your code here.
    vector<int> secondOrder = getFirstOrderElements(n, a);
    vector<int> min_max{a[0], a[1]};

    for (int i = 0; i < n; i++)
    {
        if (a[i] > min_max[0] && a[i] != secondOrder[0])
        {
            min_max[0] = a[i];
        }
        else if (a[i] < min_max[1] && a[i] != secondOrder[1])
        {
            min_max[1] = a[i];
        }
    }

    return min_max;
}

int main()
{
    vector<int> arr{2, 7, 4, 6, 9, 1};
    int n = 6;
    vector<int> res = getSecondOrderElements(n, arr);
    for (auto var : res)
    {
        cout << var << " ";
    }
    return 0;
}
