// Find a pair thaat upon addition gives value equal to sum.

#include <iostream>
#include <vector>

using namespace std;

void findPair(vector<int> arr, int sum)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (sum == (arr[i] + arr[j]))
            {
                cout << "Pair found: " << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

int main()
{
    vector<int> arr{1, 3, 5, 7, 2, 4, 6};
    int sum = 9;

    findPair(arr, sum);

    return 0;
}