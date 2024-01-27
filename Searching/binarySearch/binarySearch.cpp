// BINARY SEARCH
// Time Complexity: O(logn)
// Space Complexity: O(1)
// ---------------------------------------------------------------------------------

#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        // int mid = (start + end) / 2; --> Chances of 'Integer Overflow'
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            // Target found
            return mid;
        }
        else if (arr[mid] > target)
        {
            // Search in the left part
            end = mid - 1;
        }
        else
        {
            // Search in the right part
            start = mid + 1;
        }
    }
    // Target not found
    return -1;
}

int main()
{
    int arr[] = {3, 5, 7, 10, 17, 23, 46};
    int n = 7;

    int index = binarySearch(arr, n, 10);

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