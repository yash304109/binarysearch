#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the no. ";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
       for(int j=1;j<=x-i;j++)
       {
        cout<<j;
       }
        for(int y=2;y<=i;y++)
       {
        cout<<"**";
       }
       for(int k=x-i;k>0;k--)
       {
        cout<<k;
       }
      
       cout<<endl;
        
        
    }return 0;
}