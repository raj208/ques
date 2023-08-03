#include<iostream>
using namespace std;

//sorting merged array
void sort(int a[], int n1, int n2)
{
    int n3 = n1+n2;
    for (int i = 0; i < n3; i++)
    {
        for (int j = i+1; j < n3; j++)
        {
            int temp;
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    
}

// merging array
void merge(int a[],int b[], int n1, int n2)
{
    int index = n1;
    for (int i = 0; i < n2; i++)
    {
        a[index] = b[i];
        index++;
    }
    
}

int main(){
    int n1,n2,n3;
    cout<<"Enter the size of first array"<<endl;
    cin>>n1;

    int a[n1];
    cout<<"Enter the value of first array"<<endl;
    for (int i = 0; i < n1; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the size of second array"<<endl;
    cin>>n2;
    int b[n2];
    cout<<"Enter the value of second array"<<endl;
    for (int i = 0; i < n2; i++)
    {
        cin>>b[i];
    }

    merge(a,b,n1,n2);

    cout<<"Printing the merged array"<<endl;
    for (int i = 0; i < n1+n2; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a,n1,n2);

    cout<<"Printing the merged array after sorting"<<endl;
    for (int i = 0; i < n1+n2; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}