#include<iostream>
using namespace std;

bool Linear_search(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    else
    {
        if (key != arr[0])
        {
            int remaining = Linear_search(arr+1,size-1,key);
            return remaining;
        }
        else
        {
            return true;
        }
        
    }
    
}

//1,2,3,4,5
int main(){
    int size;
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    if (Linear_search(arr,size,key))
    {
        cout<<"key is present";
    }
    else
    {
        cout<<"Key is not present";
    }
    return 0;
}