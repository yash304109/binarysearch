#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> stack;
    stack.push('y');
    stack.push('a');
    stack.push('s');
    cout<<stack.size()<<endl;
    while(!stack.empty()){
        cout<<stack.top()<<endl;
        stack.pop();
    }
    return 0;
}