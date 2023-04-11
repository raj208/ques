#include<iostream>
using namespace std;


int fac (int x){
    long factorial = 1.0;
    for (int i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    return(factorial);
    
}
int main(){
    int num,FacSum;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int sum = 0;
    int FacSum2 = 0;
     while (num!=0)
     {
        int digit = num%10;
        sum += digit ; //sum = sum + digit
        FacSum = fac(digit);
        FacSum2 += FacSum;
        num /= 10;

     }
     cout<<"sum of num "<<sum<<endl;
     cout<<"special number "<<FacSum2<<endl;
    return 0;
}