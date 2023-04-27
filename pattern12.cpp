// ********* important ***********

#include<iostream>
using namespace std;

int main(){
    int rows,column;
    //char apl = 'A';
    cout<<"Enter the no. of rows"<<endl;
    cin>>rows;
    
    cout<<"Enter the no. of rows"<<endl;
    cin>>column;
    for (int i = 1; i <= column; i++)
    {
        
        for (int j = 1; j <= rows; j++)
        {
            char apl = 'A'+i + j -2;
            cout<<apl;         
        }
        cout<<endl;
    }
    return 0;
}

/*
i+j-1 = 1  (for number)
i+j-1 + 'A' - 1 = 1 + 'A' - 1  (adding both sides by 'A' - 1)
'A'+i+j -2 = 'A'
*/