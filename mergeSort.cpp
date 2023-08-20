#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
  int n1 = mid-l+1;
  int n2 = r-mid;

  int a[n1];
  int b[n2];

  for(int i=0; i<n1; i++)
  {
    a[i] = arr[l+i];
  }

  for(int i=0; i<n2; i++)
  {
    b[i] = arr[mid+1+i];
  }

  int i=0; 
  int j=0; // i, j will traverse our temporary array
  int k=l; // k will traverse our main array

  while(i<n1 && j<n2)
  {
    if(a[i]<b[j])
    {
      arr[k] = a[i];
      k++; i++;
    }
    else
    {
      arr[k] = b[j];
      k++; j++;
    }
  }

  while(i<n1)
  {
    arr[k] = a[i];
    k++; i++;
  }

  while(j<n2)
  {
    arr[k] = b[j];
    k++; j++;
  }
} 

void mergeSort(int arr[], int l, int r)
{
  if(l<r)
  {
    int mid = (l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);

    merge(arr, l, mid, r);
  }
}

int main() { 
 
  int arr[5] = {10,5,15,20,55};
  int n = 5;
    
    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
 
 return 0;
}
// Mergesort vs quicksort

// Quicksort will give average time complexity of O(N*log(N)) and worst case O(N*N) 

// But mergesort gives best case as well as average case complexity O(n *log(n))

// It means mergesort will not take less than this time but in average case it will be n log(n)... so if your array is small, you will still need this much time, but qsort is much faster for smaller size array because it can take O(N) in sorted array while mergesort will take n log(n) for this.

// So quicksort is faster than mergesort.

// So why use mergesort ?
// It is used to know inversion count.

// Qsort :- Fast and used in small arrays
// Mergesort :- stable and used for big arrays and linked list.