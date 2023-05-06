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
        int count1 = 1;
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
            count1++;
        }
        int count2 = 1;
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
            count2++;
        }
        cout<<endl;
    }
    return 0;
}