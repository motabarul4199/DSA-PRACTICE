#include<bits/stdc++.h>
using namespace std;

// counting sort sorting algorithm
void countingSort(int input_arr[],int s,int r)
{
    int output_arr[s];
    int count_arr[r];
// initialize all elements to 0 in count array
    for(int i=0; i<r; i++)
    {
        count_arr[i]=0;
    }
// to take a count of all elements in the input array
    for(int i=0; i<s; i++)
    {
        ++count_arr[input_arr[i]];

    }
    // cumulative count of count array to get the
    // positions of elements to be stored in the output array
    for(int i=1; i<r; i++)
    {
        count_arr[i] = count_arr[i]+count_arr[i-1];
    }
// placing input array elements into output array in proper
    //positions such that the result is a sorted array in ASC order
    for(int i=0; i<s; i++)
    {
        output_arr[--count_arr[input_arr[i]]]=input_arr[i];
    }
// copy output array elements to input array
    for(int i=0; i<s; i++)
    {
        input_arr[i] = output_arr[i];
    }

}
int main()
{
    int size = 0;
    int range = 10;
    cout << "Enter size:" << endl;
    cin >> size;
    int myarr[size];

    cout << "Enter " << size << " Integers 0-9 in any order:" << endl;
    for(int i=0; i<size; i++)
    {
        cin >> myarr[i];
    }

    cout << "Before counting sort:" << endl;
    for(int i=0; i<size; i++)
    {
        cout << myarr[i] << " ";
    }

    countingSort(myarr,size,range); //counting sort called
    cout << endl;

    cout << "After counting sort:" << endl;
    for(int i=0; i<size; i++)
    {
        cout << myarr[i] << " ";
    }

    return 0;

}
