#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    
    cout<<"Enter a number"<<endl;
    cin>>num;
    int square = num*num;   //error
    while (square>0)
    {
        int dig = square%10;
        sum = sum+dig;
        square = square/10;
    }
    
    if (sum == num)
    
        cout<<" is a neon number"<<endl;
    
    else
        cout<<" is not a neon number"<<endl;
    
    return 0;
}
