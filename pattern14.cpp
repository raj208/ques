#include<iostream>
using namespace std;

int main(){
    int rows,column, count = 1;
    char alp = 'A';
    cout<<"Enter the no. of rows"<<endl;
    cin>>rows;
    
    cout<<"Enter the no. of rows"<<endl;
    cin>>column;
    for (int i = 1; i <= column; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            cout<<alp;
            alp++;
        }
        cout<<endl;
    }
    return 0;
}   