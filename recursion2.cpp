//cheking array is sorted oe not using recursion
#include<iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    if (size ==0 || size == 1)
    {
        return true;
    }
    else
    {
        if (arr[0]<arr[1])
        {
            int remaining = isSorted(arr+1,size-1);
            return remaining;
        }
        else
        {
            return false;
        }
        
    }
    
}

int main(){
    int size;
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    if (isSorted(arr,size))
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }
    
    return 0;
}