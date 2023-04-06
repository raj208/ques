#include<iostream>
using namespace std;

int main(){
    int num, dig, org;
    int f = 0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    org = num;
    while (num!=0)
    {
        dig = num%10;
        if (dig == 0)
        {
            f=1;
            break;
        }
        num=num/10;
    }
    if (org>0 && f==1)
    {
        cout<<org<<" is a duck number"<<endl;
    }
    else{
        cout<<org<<"  is not a duck number"<<endl;
    }
        
    return 0;
}