#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int arr[] ={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }

     for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "; 
    }
 
 
 
 return 0;
}