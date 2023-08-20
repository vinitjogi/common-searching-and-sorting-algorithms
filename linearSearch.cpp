#include<bits/stdc++.h>
using namespace std;
 
 int linearSearch(int arr[], int size, int key)
 {
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
 }


int main() { 
    int size, key;
    cout<< "Enter the size of array: "<<endl;
    cin>> size;

    int arr[size];
    cout<<"Enter elements in array: ";

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
   int result=  linearSearch(arr, size, -2);
    
   (result == -1)? cout<<"Element not found \n"
                 :cout<< "Element found at index " << result;

 
 
 return 0;
}