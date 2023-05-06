#include<iostream>
using namespace std;

int main(){
    int rows,column;
    cout<<"Enter the no. of rows"<<endl;
    cin>>rows;
    
    cout<<"Enter the no. of rows"<<endl;
    cin>>column;
    for (int i = 1; i <= column; i++)
    {
        int count = 1;
        for (int j = 1; j <= rows-i+1; j++)
        {
            cout<<count;
            count++;
        }
        for (int l = 1; l <= i-1; l++)
        {
            cout<<"*";
        }
        for (int m = 1; m <= i-1; m++)
        {
            cout<<"*";
        }
        int counter = rows-i+1;
        for (int n = 1; n <= rows-i+1; n++)
        {
            cout<<counter;
            counter = counter - 1;

        }
        
        cout<<endl;
    }
    return 0;
}