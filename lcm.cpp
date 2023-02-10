// #include<iostream>
// using namespace std;

// int primeNumber(int x)
// {
//     for (int i = 1; i < x ; i++)
//     {
//         cout<<i<<endl;
//     }
    
// }

// int main()
// {
//     int a;
//     cout<<"enter a number";
//     cin>>a;
//     cout<<primeNumber(a);
//     // return 0;
// }

#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

int main() {
  int num1, num2;
  cout << "Enter first numbers: ";
  cin >> num1;
  cout << "Enter second numbers: ";
  cin >> num2;
  cout << "LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2) << endl;
  return 0;
}
