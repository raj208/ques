#include<iostream>
using namespace std;


// **********array********

int main(){
    int n;
    string str;
    cout<<"enter a string"<<endl;
    cin>>str;
    n = str.length();
    for (int i = 0; i < n; i++)
    {
        cout<<"The value of "<<i <<" is "<<str[i]<<endl;
    }
    
    return 0;
}


// *****boolean-concept*******

// int main()
// {
//     string str;
//     cout<<"enter string";
//     cin>>str;
//     cout<<isPalindrome(str);
//     return 0;
// }
 

//  ****overloading function ************
// int sum(int a, int b){
//     return (a+b);
// }

// int sum (int a, int b, int c){
//     return (a+b+c);
// }

// int main(){
//     cout<<"value of 2 arguments is "<<sum(3,6)<<endl;  //9
//     cout<<"value of 3 argumentsis "<<sum(3,6,1)<<endl; //10
//     return 0;
// }
