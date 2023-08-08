#include<iostream>
using namespace std;
int main()
{   int k=0;
    int arr[]={1,2,2,3,3};
    int arr1[]={2,2,3,3};
    for(int i=0;i<5;i++)
    {   int x=0;
    
        for(int j=k;j<4;j++)
        {   if(arr[i]<arr2[j])
            {
                break;
            }
            if(arr[i]==arr1[j]){

            cout<<arr[i]<<endl;
             x=1;
            break;
            }
        }
       if(x==0){ k++;}
    }
    return 0;
}