// Check if the array is sorted.

#include <iostream>
#include <vector>

using namespace std;

int isSorted(int n, vector<int> a)
{
    // Write your code here.
    int ctr = 1;
    ;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            ctr = 0;
        }
    }
    return ctr;
}

int main()
{
    vector<int> arr{2, 4, 7, 8};
    int n = 4;
    int res = isSorted(n, arr);

    if (res == 0)
        cout << "The array is unsorted.";
    else
        cout << "The array is sorted.";

    return 0;
}