// INSERTION SORT
//--------------------------------------------------
// TIME COMPLEXITY
//  Best Case: O(n)
//  Worst Case: O(n^2)
// SPACE COMPLEXITY = O(1)
//--------------------------------------------------

#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int x = 1; x <= n - 1; x++) // no. of rounds (0th element is sorted)
    {
        int val = arr[x]; // choose value
        int j;
        for (j = x - 1; j >= 0; j--)
        {
            if (arr[j] > val) // find its right place
            {
                arr[j + 1] = arr[j]; // shifting
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = val; // copy the value
    }
}

int main()
{
    int arr[] = {8, 6, 5, 5, 5, 1};
    int n = 6;

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}