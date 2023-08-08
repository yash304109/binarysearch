#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout<<"enter the no.";
    cin>>x;
    int ans=0;
    int i=0;
    while(x!=0)
    {
       int  digit=x%10;
        ans=(pow(2,i)*digit)+ans;
        x=x/10;
        i++;
    }
    cout<<ans;
    return 0;
}