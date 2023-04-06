#include<iostream>
#include<string>

using namespace std;

bool check_duck(string num){
    int i = 0, n = num.length();
    while (i<n && num[i]=='0')
    {
        i++;
    }
    
    while (i<n)
    {
        if (num[i]=='0')
            return true;
        i++;
    }
    return false;
    
    
}



int main(){
    string num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if (check_duck(num))
        cout <<"Its a duck number\n";
    else
        cout<<"It's not a duck number\n";
    
    
    return 0;
}