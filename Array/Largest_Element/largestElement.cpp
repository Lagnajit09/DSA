// Find the largest element in an array

#include <iostream>
#include <vector>

using namespace std;

int largestElement(vector<int> &arr, int n)
{
    // Write your code here.
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    vector<int> arr{2, 7, 4, 6, 9, 1};
    int n = 6;
    int largest = largestElement(arr, n);
    cout << "The largest element is: " << largest;
    return 0;
}
