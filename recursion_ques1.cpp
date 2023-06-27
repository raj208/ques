// where recursive relation is at end, it's called tail recursion
// where recursive relation is at not end, it's called head recursion

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

int power(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return 2*power(num  -1);
    }
    
}



int print(int num)
{
    if (num==0)    //base condition
    {
        return{};
    }
    cout<<num<<" ";  //processing

    print(num-1);  //recursive recursion
}

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    // int ans = fac(num);
    // cout<<ans<<endl;

    // int ans = power( num);
    // cout<<ans<<endl;
    print(num);
    return 0;
}