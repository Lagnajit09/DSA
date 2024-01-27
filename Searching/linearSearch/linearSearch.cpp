// LINEAR SEARCH
// Time Complexity:
//  Worst Case - O(n)
//  Best Case - O(1)
// Space Complexity: O(1)
// ------------------------------------------------------------------

#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 5, 1, 6, 8, 3, 5};
    int n = 7;

    int index = linearSearch(arr, n, 8);

    if (index == -1)
    {
        cout << "Not found!";
    }
    else
    {
        cout << "Target found at " << index;
    }

    return 0;
}