#include<iostream>
using namespace std;

int fib(int n)
{   
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);
    return ans;
    
    
}

//0,1,1,2,3,5,8,13,...
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int answer = fib(n);
    cout<<answer;
    return 0;
}