#include<iostream>
using namespace std;

int main(){
    int n1,n2, num = 0;
    cout<<"Enter two number to multiply"<<endl;
    cin>>n1;
    cin>>n2;
    for (int i = 0; i < n2; i++)
    {
        num = num+n1;
    }
    cout<<num;
    
    return 0;
}