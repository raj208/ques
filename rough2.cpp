#include<iostream>
using namespace std;


int Sort(){
    
}

int main()
{
    int num, r, c =0;
    int a[100];
    int a[100];
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
        a[c++] = freq;
        b[c] = freq;
        cout<<freq<< endl;
    }
    
    return 0;
}
