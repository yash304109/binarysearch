#include<iostream>
using namespace std;
int fbinaryseach(int arr[],int n, int key)
{
    int s=0,e=n-1;
    int ans=0;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int ebinaryseach(int arr[],int n, int key)
{
    int s=0,e=n-1;
    int ans=0;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[]={1,2,3,3,3,3,3,3,3,3,3,3,232,21};
    cout<<"firting index"<<fbinaryseach( arr,14,3);
    cout<<"last"<<ebinaryseach( arr,14,3);
    cout<<sizeof(arr)/sizeof(int);
    cout<<"yash";
}