#include<bits/stdc++.h> 
using namespace std;
// Remove duplicate from sorted array
 int removeDuplicate(int arr[],int n)
 {
     int j=0;
     for (int i = 0; i < n; i++)
     {
         if(arr[i]!=arr[i+1])
         {
             arr[j]=arr[i];
             j++;
         } 
           
     }
     arr[j]=arr[n];
     return j+1;
         
 }

int main(){
     int arr[]={0,0,4,5,5,6,6,8,8,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    
     n= removeDuplicate(arr,n-1);
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}