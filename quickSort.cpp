#include<bits/stdc++.h>
using namespace std;
 
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1; i<=e; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }

    //place pivot at correct position
    int pivotIndex = s+count;
    swap(arr[pivotIndex], arr[s]); 

    // handeling left & right parts

    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;

        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++; j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // if(s>=e) return;
    if(s<e)
    {
        int p = partition(arr, s, e); // gives partition indedx

        quickSort(arr, s, p-1); // sorting left side

        
        quickSort(arr, p+1, e); //sorting right side
    }
}


int main() { 
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;
    
    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
 
 return 0;
}