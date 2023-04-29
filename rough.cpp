#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size -1 ;
    int mid = start + (end-start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key < arr[mid] )
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int SortedArray(int arr[], int size){
    for (int i = 0; i < size-1 ; i++)
    {
        for (int j = 0; j < size - i -1 ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }  
    }
    cout<<"Sorted array is ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size,key;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the value of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    SortedArray(arr, size);

    cout<<"Enter the key"<<endl;
    cin>>key;

    int index = BinarySearch(arr,size, key);
    cout<<"The key is on Index number "<<index;
    return 0;
}