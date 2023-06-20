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
    
}

int main()
{
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
    // cout<<"Printing in spiral"<<endl;
    // for (int i:ans)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;
        
    return 0;
}

// *******PRINTING USING VECTOR**********

// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int> >& matrix) {
        
        
//         vector<int> ans;
//         int row = matrix.size();
//         int col = matrix[0].size();
        
//         int count = 0;
//         int total = row*col;
        
//         //index initialisation
//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = row-1;
//         int endingCol = col-1;
        
        
//         while(count < total) {
            
//             //print starting row
//             for(int index = startingCol; count < total && index<=endingCol; index++) {
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;
            
//             //print ending column
//             for(int index = startingRow; count < total && index<=endingRow; index++) {
//                 ans.push_back(matrix[index][endingCol]);
//                 count++;
//             }
//             endingCol--;
            
//             //print ending row
//             for(int index = endingCol; count < total && index>=startingCol; index--) {
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;
            
//             //print starting column
//             for(int index = endingRow; count < total && index>=startingRow; index--) {
//                 ans.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         } 
//         return ans;
//     }
// };