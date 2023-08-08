#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter";
    cin>>x;
    int ans=0;
    while(x!=0)
    {
        int rev=x%10;
        ans=ans*10+rev;
        x=x/10;
    }
    cout<<ans;
    return 0;

}