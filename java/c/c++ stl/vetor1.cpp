#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> p;
    p=make_pair(2,"asd");
    //p={2,"asd"}
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> &p1=p;
    p1.first=3;
    int a[]={1,2,3};
    int b[]={3,4,5};
    pair<int,int> r_array[3];
    r_array[0]={1,3};
    r_array [1]= {2,4};
    r_array[2]={3,5};
    swap(r_array[0],r_array[2]);
    for (int i = 0; i <3; i++)
    {
        cout<<r_array[i].first<<r_array[i].second<<endl;
        
    }

    return 0;

}