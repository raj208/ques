#include<iostream>
using namespace std;

int FirstOccurence(int arr[], int size, int key){
    int start = 0,ans = 0;
    int end = size -1;
    int mid = start + (end - start)/2; 
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2 ;  
    }
    return ans;
    
}

int LastOccurence(int arr[], int size, int key){
    int start = 0, ans = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
    
}

int SortedArray(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    cout<<"Sorted array"<<endl;
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
    cout<<"Enter the vlue of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    SortedArray(arr,size);

    cout<<"Enter the key"<<endl;
    cin>>key;
    
    int Left_Most_Index = FirstOccurence(arr,size,key);
    int Right_Most_Index = LastOccurence(arr,size,key);

    cout<<"Left most index of the key is "<<Left_Most_Index<<endl;
    cout<<"Right most index of the key is "<<Right_Most_Index<<endl;
    return 0;
}