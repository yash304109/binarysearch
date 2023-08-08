#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v){
     cout<<"size"<<" "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        /* code */
    }
    v.push_back(2);
    cout<<endl;
    
}
int main()
{
    vector<int> v(10,3);//v(10)
    v.push_back(5);
    v.pop_back();//o(1)
    print(v);
    vector<int> v2=v;//o(n)one by one copy
    print(v2);
}