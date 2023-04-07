
//Cpp Program to check whether a given number is a Neon number or not
#include <iostream>
using namespace std;
 
int main()
{
  int num;
 
  cout << "Enter the number: ";
  cin >> num;
 
  int square = num * num;
  int sum = 0;
 
  while (square > 0)
  {
    int lastDigit = square % 10;
    sum = sum + lastDigit;
    square = square / 10;
  }
 
  if (sum == num)
    cout << num << " is a Neon number";
  else
    cout << num << " is NOT a Neon number";
 
  return 0;
}