#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid] == key) return mid;
        if(key > arr[mid]) start = mid+1;
        else end = mid -1;
    }
    return 0;
}

int main() {
    int n, key; 

    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemetns in sorted order ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // sort(arr, arr+n);

    cout<<"Sorted array is: ";
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    int result = binarySearch(arr, n, 10);

    (result == 0)? cout<<"Element not present"
                 : cout<<"Element found at index "<<result;
 
 return 0;
}