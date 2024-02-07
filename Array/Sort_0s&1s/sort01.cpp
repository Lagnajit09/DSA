// Sort the 0s and 1s in an array.

#include <iostream>
#include <vector>

using namespace std;

void swap(int &num1, int &num2)
{
    int num3 = num1;
    num1 = num2;
    num2 = num3;
}

void sortArray(vector<int> arr)
{
    int i = 0;
    int start = 0;
    int end = arr.size() - 1;
    while (i != end)
    {
        if (arr[i] == 0)
        {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
        else if (arr[i] == 1)
        {
            swap(arr[end], arr[i]);
            end--;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr{0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0};

    sortArray(arr);

    return 0;
}