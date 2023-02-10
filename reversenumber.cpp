#include <iostream>
using namespace std;

int main()
{
    int num, reversed = 0;
    cout << "Enter an integer: ";
    cin >> num;
    while (num != 0)
    {
        int digit = num % 10; //reminder
        reversed = reversed * 10 + digit;
        num /= 10;     //a = a / b;
    }
    cout << "Reversed number: " << reversed << endl;
    return 0;
}


// ******reverse function******
// int reverse(int x)
// {
//     while (x != 0)
//     {
//         int reversed = 0;
//         int digit = x % 10;
//         reversed = reversed * 10 + digit;
//         x /= 10;
//         cout<< reversed;
//     }
    
// }

// int main()
// {
//     int a;
//     cout<<"Enter an integer: ";
//     cin>>a;
//     reverse(a);
//     return 0;
// }



