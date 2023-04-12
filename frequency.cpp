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