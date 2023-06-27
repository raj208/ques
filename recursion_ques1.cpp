#include<iostream>
using namespace std;

int fac(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num*fac(num-1);
    }
}

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int ans = fac(num);
    cout<<ans<<endl;
    return 0;
}