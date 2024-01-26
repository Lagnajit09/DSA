// BUBBLE SORT
//--------------------------------------------------
// TIME COMPLEXITY:
//  Best Case - O(n)
//  Average Case - O(n^2)
//  Worst Case - O(n^2)
// SPACE COMPLEXITY = O(1)
//--------------------------------------------------

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int x = 1; x <= n - 1; x++) // no. of rounds = no. of elements - 1
    {
        bool swapped = false; // check if the array is already sorted

        for (int i = 0; i < n - x; i++) // the xth largest element is already at its position so i < (n-x)
        {

            if (arr[i] > arr[i + 1])
            {
                swapped = true;

                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {9, 8, 7, 4, 3, 1};
    int n = 6;

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}