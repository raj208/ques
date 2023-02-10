#include<iostream>
using namespace std;

int main()
{
    int a ;
    
    cout<<"Enter the number of table you want"<<endl;
    cin>>a;
    cout<<"here's your table of "<<a<<endl;
    int b = 1;
    do
    {
        cout<<a*b<<endl;
        b++;

    } while (b<=10);

    
    return 0;
}

