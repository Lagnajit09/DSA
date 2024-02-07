// Left rotate an array by one element.

#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> arr)
{
    int firstElement = arr[0];

    int i;
    for (i = 1; i < arr.size(); i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[i - 1] = firstElement;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60};
    rotate(arr);

    return 0;
}