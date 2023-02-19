#include<iostream>
#include<string>
using namespace std;



int main(){
    int n;
    cout<<"Enter the number of digit you want ot sort "<<endl;
    cin>>n;

    int arr[n]; //declare array with size n

    cout<<"Enter " <<n <<" Elements "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; i++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
            
        }
               /* code */
    }
    
    cout<<"Sorted array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    return 0;
}