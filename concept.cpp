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
 
