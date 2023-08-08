#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the no. ";
    cin>>x;
    char ch='A'+x;
    
    for(int i=1;i<=x;i++)
    {   
       char z=ch;
        for (int j=1;j<=i; j++)
        {
            cout<<ch;
            ch++;
           
        }
        cout<<endl;
        
        ch=z-1;
        
    }return 0;
}