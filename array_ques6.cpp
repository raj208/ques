//print the array in spiral

#include<iostream>
#include<vector>
using namespace std;

// void SpiralPrint(vector<int>ans, int arr[][100], int column, int row)
void SpiralPrint( int arr[][100], int column, int row)
{
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = column-1;

    int count = 0;
    int total = row*column;
    while (count < total)
    
    {
        //working fine
        for (int i =startingRow ; i <= endingCol && count < total ; i++)
        {
            cout<<arr[startingRow][i]<<" ";
            // ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;

        //working fine
        for (int i = startingRow; i <= endingRow && count < total ; i++)
        {
            cout<<arr[i][endingCol]<<" ";
            // ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;


        for (int i = endingCol; i >= startingCol && count < total; i--)
        {
            cout<<arr[endingRow][i]<<" ";
            // cout<<" Testing 1 ";
            // ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;

        for (int i = endingRow; i >= startingRow && count < total; i--)
        {
            cout<<arr[i][startingCol]<<" ";
            // cout<<" Testing 2 ";
            // ans.push_back(arr[i][startingCol]);
            count++;

        }
        startingCol++;
        
        
        
        
    }
    // for(int i:ans)
    // {
    //     cout<<ans[i]<<" ";
    // }
    
}

int main(){
    // vector<int>ans;
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
    
    // SpiralPrint(ans,arr, column, row);
    SpiralPrint(arr, column, row);
    
    return 0;
}