#include <iostream>
using namespace std;

int main() {
  int arr[] = {3, 5, 2, 8, 1}; // Example array
  int size = sizeof(arr) / sizeof(arr[0]); // Get size of array
  int highest = arr[0]; // Assume first element is the highest
  
  // Loop through the array to find the highest number
  for (int i = 1; i < size; i++) {
    if (arr[i] > highest) {
      highest = arr[i];
    }
  }
  
  // Print the highest number
  cout << "The highest number is: " << highest << endl;

  return 0;
}
