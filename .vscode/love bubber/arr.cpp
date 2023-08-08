
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<"hii";
    for(int i=0;i<5;){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i=i+2;

    }
   for(int j=0;j<5;j++)
   {
    cout<<arr[j]<<endl;
   }
   cout<<sizeof(arr)/sizeof(int);
    return 0;
}