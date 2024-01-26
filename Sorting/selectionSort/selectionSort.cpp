// SELECTION SORT
//--------------------------------------------------
// TIME COMPLEXITY = O(n^2)
// SPACE COMPLEXITY = O(1)
//--------------------------------------------------

#include <iostream>

using namespace std;

void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++) // no. of rounds = no. of elements - 1
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) // index of min element in i+1 to n
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; // new min found
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[] = {8, 6, 5, 5, 5, 1};
    int n = 6;

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}