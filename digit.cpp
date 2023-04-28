#include<iostream>
using namespace std;

int main(){
    int num ,count = 0, digit;
    cin>>num;

    while (num != 0)
    {
        digit = num % 10;
        count++;
        num = num / 10;
    }
    cout<<"YOur digit is "<<count;

    
    return 0;
}