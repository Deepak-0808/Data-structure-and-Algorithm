#include<bits/stdc++.h> 
using namespace std;
bool sortedarray(int arr[],int n)
{
    int gvalue=arr[0];
   for (int i = 1; i < n; i++)
   {
       if(arr[i]>=gvalue)
       gvalue=arr[i];
       else
       return false;
   }
   return true;
   
}
int main(){
    int arr[]={2,3,6,6,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<< sortedarray(arr,n);
    return 0;
}