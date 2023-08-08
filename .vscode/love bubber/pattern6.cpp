#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the no. ";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
       for(int j=x-i;j>0;j--)
       {
        cout<<" ";
       }
       for(int k=1;k<=i;k++)
       {
        cout<<k;
       }
       for(int y=1;y<i;y++)
       {
        cout<<y;
       }
       cout<<endl;
        
        
    }return 0;
}