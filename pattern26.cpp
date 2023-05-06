// ************important************

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
        for (int j = 1; j <= rows-i+1; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<" "<<k;
        }
        for (int l = 1; l <= i-1; l++)
        {
            cout<<" "<<l;
        }
        cout<<endl;
    }
    return 0;
}