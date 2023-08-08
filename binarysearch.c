#include<stdio.h>
int binarysearch(int arr[],int x,int low,int high)
{   
    while(low<=high)
    {
        int mid=(high-low)/2+low;
        if(arr[mid]==x)
          return mid;
        if(arr[mid]>x)
          high=mid-1;
        else
          low=mid+1;
    }
 
}
int main()
{
    int arr[]={1,32,3,53,52,0};
    int x=0;
    int result=binarysearch(arr,x,0,5);
    if(result==-1)
        printf("Not found");
    else
    {
        printf("%d",result);
    }
    return 0;
}