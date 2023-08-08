#include<bits/stdc++.h>

int main()
{
    stack<int> input;
    input.push(12);
    input.push(13);
    input.push(15);
    input.push(1);
    input.push(14);
    input.push(0);
   stack<int> tempstack;
   
    
    while(!input.empty()){
         int temp=input.top();
         input.pop();
        while(!tempstack.empty() && tempstack.top()<temp){
            input.push(tempstack.top());
            tempstack.pop();
        }

    tempstack.push(temp);
    }
     while(!tempstack.empty())
    {
        cout<<tempstack.top();
        tempstack.pop();

    }
    return 0;

}