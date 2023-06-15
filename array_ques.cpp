#include<iostream>
using namespace std;

int main(){
    int column,row;
    cout<<"Enter the size of row"<<endl;
    cin>>row;

    cout<<"Enter the size of column"<<endl;
    cin>>column;
    int arr[row][column]; //row, column
    cout<<"Enter the value of array"<<endl;

    //taking input as row
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }

    //taking input as column
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin>>arr[j][i];
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}