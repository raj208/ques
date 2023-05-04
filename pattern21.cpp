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
        for (int j = 1; j <= i-1; j++)
        {
            cout<<" ";

        }
        for (int k = 1; k <= rows-i+1; k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}