// PRACTICING POINTERRS

#include<iostream>
using namespace std;

int main(){
    // int n = 2;
    // int *ptr = &n;
    // ++*ptr;
    // cout<<*ptr;


    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;

    // cout<<*arr<<endl;
    // cout<<arr[0]<<endl;

    // int i=3;
    // cout<<i[arr]<<endl;

    // cout<<*(arr+2)<<endl;

    int *p = &arr[2];
    // cout<<&arr[2]<<endl;  //difference address
    // cout<<*p<<endl;
    // cout<<&p<<endl;   //difference address


    int *ptr = &arr[1];
    cout<<ptr<<endl;
    ptr = ptr+1;  //will point to the next block in the array
    cout<<ptr<<endl;
    cout<<*ptr<<endl; //will print the value of next block in the array, i.e = arr[2]
    cout<<&arr[2]<<endl;

    

    return 0;
}