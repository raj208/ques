#include <iostream>
using namespace std;

int main() {
    int num, digit;
    int frequency[10] = {0}; // initialize array with 0s
    
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10; // extract the last digit
        frequency[digit]++; // increment the count for that digit
        num /= 10; // remove the last digit from the number
    }
    
    // print the frequency of digits
    cout << "Frequency of digits:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << " occurs " << frequency[i] << " times" << endl;
    }
    
    return 0;
}
