#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int start, end;
    cout << "Enter starting value: ";
    cin >> start;
    cout << "Enter ending value: ";
    cin >> end;
    cout << "Prime numbers between " << start << " and " << end << " are:" << endl;
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}


