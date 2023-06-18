//printing the sum of each row;

#include<iostream>
using namespace std;

void PrintSum(int arr[][100], int row, int column)
{
    int j;
    for (int i = 0; i <row ; i++)
    {
        int sum = 0;
        for ( j = 0; j < column; j++)
        {
            // cout<< arr[i][j] <<" ";
            sum += arr[i][j];
        }
        cout<< sum<<" "<<endl;
        
    }
}

int main(){
    int row;
    cout<<"Enter the value of row"<<endl;
    cin>>row;

    int column;
    cout<<"Enter the value of column"<<endl;
    cin>>column;

    int arr[row][100];
    cout<<"Enter the value of arr"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    cout<<"Printing the value of array"<<endl;
    for (int i = 0; i <row ; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<"Printing the sum of array"<<endl;
    PrintSum(arr, row, column);
    
    return 0;
}