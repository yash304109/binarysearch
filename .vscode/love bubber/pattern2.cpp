#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the no. ";
    cin>>x;
    int count=1;
    for(int i=0;i<x;i++)
    {
        for (int j = 1; j <=x; j++)
        {
            cout<<count;
            count++;
            /* code */
        }
        cout<<endl;
        
    }return 0;
}