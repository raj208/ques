//Binary search in 2D matrix\

#include<iostream>
using namespace std;

bool Search(int arr[][100], int row, int column, int target)
{
    int start = 0;
    int end = row*column -1;
    int mid = start + (end - start)/2;

    while (start<=end)
    {
        int element = arr[mid/column][mid%column];  //important

        if (element == target)
        {
            return 1;
        }
        
        if (element < target)
        {
            start = mid +1;
        }

        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
        

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