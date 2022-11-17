#include<bits/stdc++.h>
using namespace std;

void Opt_bubble_Sort(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        bool flag = false;
        for (int j = 0; j < (5 - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                flag = true;
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        if(flag == false)
        {
            break;
        }

    }
}

int main()
{
    int myarray[5];
    int size;
    cout << "Enter 5 integers in any order: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarray[i];
    }
    cout << "Before Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << " ";
    }

    Opt_bubble_Sort(myarray);

    cout << endl << "After Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << " ";
    }

    return 0;
}
