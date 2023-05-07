#include <iostream>
using namespace std;

bool isMountain(int arr[], int n) {
    int i = 0;
    
    // Check if array is in increasing order
    while (i < n-1 && arr[i] < arr[i+1]) {
        i++;
    }
    
    // Check if array is in decreasing order
    while (i < n-1 && arr[i] > arr[i+1]) {
        i++;
    }
    
    // If array is a mountain
    return (i == n-1);
}

int main() {
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the value of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    if (isMountain(arr, n)) {
        cout << "The array is a mountain.\n";
    } else {
        cout << "The array is not a mountain.\n";
    }
    
    return 0;
}
