#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int n)
{
    int temp = -1;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            cout << "Element found at position: " << i + 1 << endl;
            temp = 0;
            break;
        }
    }

    if (temp == -1)
    {
        cout << "No Element Found." << endl;
    }

}

int main()
{
    int myarr[5];
    cout << "Please enter 5 elements of the Array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    cout << "Please enter an element to search:" << endl;
    int num;
    cin >> num;

    linearSearch(myarr, num);

    return 0;
}
