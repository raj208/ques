#include<iostream>
using namespace std;


void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move to the next pair
        start++;
        end--;
    }
}

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    cout<<"Enter the value of array"<<endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }


    reverseArray(arr,size);
    cout<<"Reverse array is"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    
    return 0;
}