#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int num)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int myarr[10];
    int num1;
    int output;

    cout << "Please enter 10 elements ASCENDING order:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> myarr[i];
    }
    cout << "Please enter an element to search:" << endl;
    cin >> num1;

    output = binarySearch(myarr, 0, 9, num1);

    if (output == -1)
    {
        cout << "No Match Found." << endl;
    }
    else
    {
        cout << "Match found at position:" << output +1 << endl;
    }

    return 0;
}
