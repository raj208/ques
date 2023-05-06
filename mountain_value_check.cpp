// #include<iostream>
// using namespace std;

// bool MountainValueCheck(int arr[], int size)
// {
//     int start1 = 0,  start2 = 0;
//     for (int i = 0; i <= size; i++)
//     {
//         if (arr[i] <= arr[i+1])
//         {
//             i = start2;
//             continue;
//         }
//         else if(arr[start2] >= arr[start2 + 1])
//         {
//             for (int j = start2; j < size; j++)
//             {
//                 if (arr[j] >= arr[j+1])
//                 {
//                     return 1;
//                 }
                
//             }
            
//         }
//     }
//     return 0;
    
// }

// int main()
// {
//     int size;
//     cout<<"Enter the size of array"<<endl;
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the value of size"<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }
    
//     // MountainValueCheck(arr,size);
//     if (MountainValueCheck(arr, size))
//     {
//         cout<<"Array is in Mountain structure";
//     }
//     else
//     {
//         cout<<"Array is not in mountain structure";
//     }
        
    
//     return 0;
// }

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
    int arr[] = {1, 3, 5, 7, 9, 8, 6, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    if (isMountain(arr, n)) {
        cout << "The array is a mountain.\n";
    } else {
        cout << "The array is not a mountain.\n";
    }
    
    return 0;
}
