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
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}