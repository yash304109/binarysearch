#include<iostream>
using namespace std;
int max(int arr[],int size){
    int maxi=0;
    for (int i = 0; i < size; i++)
    {
       // if(arr[i]>max)
       // {
        //   max=arr[i];
        //}
        maxi=max(maxi,arr[i];)
       

        /* code */
    }
     return max;
}
int min(int arr[],int size){
    int min=2000;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
       
        /* code */
    }
     return min ;

    
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        /* code */
    }
    cout<<"max"<<max(arr,size)<<endl;
    cout<<"min"<<min(arr,size);
    return 0;
    
}