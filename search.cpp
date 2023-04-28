#include<iostream>
using namespace std;


bool Search(int arr[], int key, int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        
    }
    return 0;
    
}

int main(){
    int key,size;
    int arr[100];
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    cout<<"Enter the value of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key you want to search for"<<endl;
    cin>>key;

    bool found = Search(arr,key,size);

    if (found)
    {
        cout<<key<<" is present in the array";
    }
    else{
        cout<<key<<" is not present in the array";
    }
        
    
    
    return 0;
}