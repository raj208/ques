#include<iostream>
using namespace std;

int num;

int fac(int x){
    long factorial = 1.0;
    for (int i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    
    return(factorial);
}
int main(){
    cout<<"Enter a positive number"<<endl;
    cin>>num;
    cout<<fac(num);
    return 0;
}
