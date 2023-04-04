#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}


int main() {
    string str;
    cout << "Enter a number";
    cin >> str;

    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
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
 
