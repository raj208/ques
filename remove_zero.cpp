#include<iostream>
using namespace std;

int main(){
    int n, c= 0;
    cout<<"Enter the number of array"<<endl;
    cin>>n;
    int arr[n];

   cout << "Enter " << n << " elements: " << endl;
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        else{
            cout<<arr[i];
        }
        
    }
    cout<<endl;
    
    return 0;
}