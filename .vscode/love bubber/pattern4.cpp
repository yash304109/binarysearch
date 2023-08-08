#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the no. ";
    cin>>x;
    int row=1;
    while(row<=x)
    {
        int col=1;
        while (col<=row)
        {
            cout<<row;
            col++;
            /* code */
        }
        cout<<endl;
        row++;
    }
   return 0;
}