//array should be in mountain format, 
//array size should be greater than,
//find the peak of the mountian array using binary search to avoid exceed time complexity, 
//time complexity should be O(logn)
//you can create a function to check whether the array is on mountain format or not

#include<iostream>
using namespace std;

bool MountainValueCheck(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr{i+1})
        {
            continue;
        }
        else if (arr )
        {
            /* code */
        }
        
        
    }
    return 0;
    
}

int PeakValue(int arr[], int size){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    while (start < end)
    {
        if (arr[mid] < arr[mid+ 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;;
        }
        mid = start + (end - start)/2;   
    }
    return start;
}
int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the value of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int peak = PeakValue(arr, size);
    cout<<"The index value of peak is "<<peak;
    return 0;
}