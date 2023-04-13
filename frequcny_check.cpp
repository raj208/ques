#include <iostream>
using namespace std;

int main() {
    int num, digit, frequency = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a digit to find its frequency: ";
    cin >> digit;
    while (num != 0) {
        int remainder = num % 10;
        if (remainder == digit) {
            frequency++;
        }
        num = num / 10;
    }
    cout << "The frequency of digit " << digit << " in the given number is " << frequency << endl;
    return 0;
}
