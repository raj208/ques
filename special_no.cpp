#include<iostream>
using namespace std;

// int fac(num){
//     long fact
// }

int main(){
    int num;
    int factorial = 1.0;
    cout<<"Enter a positive number"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout<<factorial;
    return 0;
}