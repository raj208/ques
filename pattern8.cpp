#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of column"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int value = i;   //important checkpoint
        for (int j = 1; j <= i; j++)
        {
            cout<<value;
            value++;
        }
        cout<<endl;
        
    }
    

    return 0;
}

// ******** SOLVE THIS QUESTION WITHOUT USING "INT VALUE" *********