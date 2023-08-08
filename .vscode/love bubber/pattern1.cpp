#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the no. ";
    cin>>x;
    for(int i=0;i<x;i++)
    {
        for (int j = 1; j <=x; j++)
        {
            cout<<x-j+1;
            /* code */
        }
        cout<<endl;
        
    }return 0;
}