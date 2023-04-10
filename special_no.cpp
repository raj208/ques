#include<iostream>
using namespace std;

int num;
int fac(num)
{
    long factorial = 1.0;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    cout<<"Enter a positive number"<<endl;
    cin>>num;
    cout<<fac<<endl;
    return 0;
}