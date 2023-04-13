#include<iostream>
using namespace std;

int main(){
    int num, r;
    
    cout<<"enter a number"<<endl;
    cin>>num;
    for (int i = 0; i < 10 ; i++)
    {
        cout<<"The frequency of "<< i << " = ";
        int freq = 0;       //error
        for (int j = num ; j > 0; j /= 10)
        {
            r = j%10;
            if (r == i)
            {
                freq++;
            }
            
        }
        cout<<freq<< endl;
    }
    
    return 0;
}

// ************ function to check frequency*******************

// #include<iostream>
// using namespace std;

// int r;
// int frequency(int n){
//     for (int i = 0; i < 10; i++)
//     {
//         //cout<<"The frequency of "<< i << " = ";
//         int freq = 0;
//         for (int j = n; j > 0 ; j /= 10)
//         {
//             r = j %10;
//             if (r == i)
//             {
//                 freq++;
//             }
            
//         }
//         if (freq != 0)
//         {
//             cout<<freq<< endl;
//         }
        
        
        
//     }
    
// }

// int main(){
//     int num;
//     cout<<"Enter a number"<<endl;
//     cin>>num;
//     frequency(num);

//     return 0;
// }



 
// **************** different method******************

// #include <iostream>
// using namespace std;

// int main() {
//     int num, digit;
//     int frequency[10] = {0}; // initialize array with 0s
    
//     cout << "Enter a number: ";
//     cin >> num;

//     while (num != 0) {
//         digit = num % 10; // extract the last digit
//         frequency[digit]++; // increment the count for that digit
//         num /= 10; // remove the last digit from the number
//     }
    
//     // print the frequency of digits
//     cout << "Frequency of digits:" << endl;
//     for (int i = 0; i < 10; i++) {
//         cout << i << " occurs " << frequency[i] << " times" << endl;
//     }
    
//     return 0;
// }

