#include<iostream>
using namespace std;

void Tower_Of_Hanoi(int n,char rodA,char rodC,char rodB)
{
    if (n==0)
    {
        return;
    }
    Tower_Of_Hanoi(n-1,rodA,rodB,rodC);
    cout<<"move disk "<<n<<" form "<<rodA <<" to "<<rodC<<endl;
    Tower_Of_Hanoi(n-1,rodB,rodC,rodA);
}

int main(){
    int n;
    cout<<"Enter the number of disks"<<endl;
    cin>>n;

    Tower_Of_Hanoi(n,'A','C','B');
    return 0;
}