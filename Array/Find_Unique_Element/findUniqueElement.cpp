#include <iostream>

using namespace std;

int findElement(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 4, 1, 2, 6, 5, 5, 6, 4, 3};
    int n = 11;

    int uniqueElement = findElement(arr, n);

    cout << "The unique element: " << uniqueElement;

    return 0;
}