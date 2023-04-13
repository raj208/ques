#include<iostream>
using namespace std;

int SrotingArray(int x){
    for (int i = 0; i < x; i++)
    {
        /* code */
    }
    
}


int HighFrequency(int n){

}

int main(){
    int num, digit;
    int frequency[10] = {0};
    cout<<"Enter a number: ";
    cin>>num;

    while (num != 0) {
        digit = num % 10; 
        frequency[digit]++; 
        num /= 10; 
    }
    SrotingArray()
    

    return 0;
}