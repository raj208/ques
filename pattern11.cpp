 #include<iostream>
 using namespace std;
 
 int main(){
    int rows,column;
    cout<<"Enter the no. of rows"<<endl;
    cin>>rows;
    
    cout<<"Enter the no. of rows"<<endl;
    cin>>column;
    for (int i = 1; i <= column; i++)
    {
        
        for (int  j = 1; j <= rows; j++)
        {
            char apl = 'A' + j - 1;
            cout<<apl;
        }
        cout<<endl;
    }
    return 0;
 }