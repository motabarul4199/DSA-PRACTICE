#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int pIndex = s;

    for(int i=s; i<e; i++)
    {
        if(arr[i]<pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }

    int temp = arr[e];
    arr[e] = arr[pIndex];
    arr[pIndex] = temp;

    return pIndex;
}

int partition_r(int arr[],int s,int e)
{

    int random = s+rand() % (e-s+1);
    int temp = arr[e];
    arr[e] = arr[random];
    arr[random] = temp;
    return partition(arr,s,e);
}

void quickSort(int arr[],int s,int e)
{
    if(s<e)
    {
        int p = partition_r (arr,s,e);
        quickSort(arr,s,p-1);
        quickSort(arr,p+1,e);
    }
}

int main()
{
    int size = 0;
    cout<<"Enter array size=";
    cin>>size;
    cout<<endl;
    int myarr[size];

    cout<<"Enter "<<size<<" Element in array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>myarr[i];
    }

    cout<<"Before sorting:"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<myarr[i]<<" ";
    }
    cout<<endl;

    quickSort(myarr,0,(size-1));
    cout<<endl;

    cout<<"After sorting:"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<myarr[i]<<" ";
    }

    return 0;


}
