// PRINTING SPACES

/*
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
        for (int j = 1; j <= column - i; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

// WITHOUT SPACES

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
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}