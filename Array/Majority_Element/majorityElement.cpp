// Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times

#include <iostream>
#include <vector>

using namespace std;

int findMajority(vector<int> arr)
{
    int ctr;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        ctr = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr = ctr + 1;
            }
        }
        if (ctr > (size / 2))
        {
            return arr[i];
            break;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{1, 3, 4, 5, 5, 5, 5, 5, 3, 5};
    int majority = findMajority(arr);

    if (majority == -1)
    {
        cout << "No major element.";
    }
    else
    {
        cout << "Majority element: " << majority;
    }

    return 0;
}