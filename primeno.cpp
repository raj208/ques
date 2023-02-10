#include<iostream>
using namespace std;


// int main()  
// {  
//   int n, i, m=0, flag=0;  
//   cout << "Enter the Number to check Prime: ";  
//   cin >> n;  
//   m=n/2;  
//   for(i = 2; i <= m; i++)  
//   {  
//       if(n % i == 0)  
//       {  
//           cout<<"Number is not Prime."<<endl;  
//           flag=1;  
//           break;  
//       }  
//   }  
//   if (flag==0)  
//       cout << "Number is Prime."<<endl;  
//   return 0;  
// }  

int main()
{   
    int x,y;
    cout<<"enter the number"<<endl;
    cin>>x;
    y=x/2;
    for (int i = 2; i <= y; i++)
    {
        if (x % i == 0)
        {
            cout<<"number is not prime";
            break;
        }
        else
        {
            cout<<"number is prime";
        }
        
    }
    return 0;
    
}