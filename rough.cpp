

#include <iostream>

using namespace std;

int main() {
  int output[] = {1, 2, 3, 4, 5}; // example output
  int outputArray[5]; // create empty array

  for (int i = 0; i < 5; i++) {
    outputArray[i] = output[i]; // assign each value to the corresponding element in the array
  }

  // output the array
  for (int i = 0; i < 5; i++) {
    cout << outputArray[i] << " ";
  }
  cout << endl;

  return 0;
}
