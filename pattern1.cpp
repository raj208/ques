#include<iostream>
using namespace std;

int main(){
    int rows,column;
    cout<<"Enter the no. of rows"<<endl;
    cin>>rows;

    cout<<"Enter the no. of rows"<<endl;
    cin>>column;
    
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    

    return 0;
}