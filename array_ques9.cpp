// search in 2D matrix
//array is sorted in row/column wise

#include<iostream>
using namespace std;

bool Search(int arr[][100], int row, int column, int target)
{
    int rowIndex = 0;
    int colIndex = column - 1;

    while (rowIndex < row && colIndex >=0)
    {
        int element = arr[rowIndex][colIndex];

        if (element == target)
        {
            return 1;
        }
        
        if (element < target)
        {
            rowIndex++;
        }

        else
        {
            colIndex --;
        }
        
    }
    return 0;
    
}

int main(){
    int row;
    cout<<"Enter the value of row"<<endl;
    cin>>row;

    int column;
    cout<<"Enter the value of column"<<endl;
    cin>>column;

    int arr[row][100];
    int arr2[row][100];
    cout<<"Enter the value of arr"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    int target;
    cout<<"Enter the number to be searched"<<endl;
    cin>>target;
    
    cout<<"Printing the value of array"<<endl;
    for (int i = 0; i <row ; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }
    
    if (Search(arr, row, column, target))
    {
        cout<<"Number is present in the matrix"<<endl;
    }
    else{
        cout<<"Number is not present in the matrix"<<endl;
    }
    
    return 0;
}