// Remove duplicates from a sorted array (without creating 2nd array).

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &arr, int n)
{
    // Write your code here.
    if (n == 0 || n == 1)
        return n;

    // To store index of next unique element
    int j = 0;

    // Just maintaining another updated index i.e. j
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];

    arr[j++] = arr[n - 1];

    return j;
}

int main()
{
    vector<int> arr{1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = 9;

    // removeDuplicates() returns new size of array.
    n = removeDuplicates(arr, n);

    // Print updated array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}