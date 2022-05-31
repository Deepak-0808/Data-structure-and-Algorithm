#include<bits/stdc++.h> 
using namespace std;
// Reverse an array 
void ReverseArray(int arr[],int n)
{
    int high=n; //3,2,1
    for (int i = 0; i <= n/2; i++)
    {
        int temp=arr[i]; //4,8
        arr[i]=arr[high];   //7,5
        arr[high]=temp;     //4,8
             high--; 
    }
    

}

int main(){
    int arr[]={4,8,5,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    ReverseArray(arr,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}