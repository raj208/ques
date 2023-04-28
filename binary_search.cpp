#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    // ooptimized code 
    int mid = start + (end - start)/2 ;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        mid = start + (end - start)/2 ;
    }
    return -1;
}

int IncreasingOrder(int arr[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"Sorted array"<<endl;;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    
}

int main()
{
    int size, key;
    cout << "Enter the size of array" << endl;
    cin >> size;

    cout << "Enter the value of array" << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    IncreasingOrder(arr, size);
    
    // for (int i = 0; i < size - 1; i++)
    // {
    //     for (int j = 0; j < size - i - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }

    // cout << "Sorted array ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    cout << "Enter the key" << endl;
    cin >> key;
    int index = BinarySearch(arr, size, key);
    cout << "The index value of the key is " << index << endl;

    return 0;
}