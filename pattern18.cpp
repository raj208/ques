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
        char alp = 'A'+i-1;
        for (int j = 1; j <= rows; j++)
        {
            cout<<alp;
            alp++;
        }
        cout<<endl;
    }
    return 0;
}