// #include<bits/stdc++.h> 
// using namespace std;

// void printarr(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//   cout<<endl;
// }

// void reversearray(int arr[],int n)
// {
//     int start=0;
    
//     while(start<n)
//     {
//         int temp;
//         temp=arr[start];
//         arr[start]=arr[n];
//         arr[n]=temp;
//         start++;
//         n--;
//     }
// }

// int main(){
//     int arr[]={10,20,30,40,50};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printarr(arr,n);
//     reversearray(arr,n-1);
//     printarr(arr,n);
   
//     return 0;
// }


// Recursive approach for reverse array

#include<bits/stdc++.h> 
using namespace std;

void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
  cout<<endl;
}

void reversearray_recursion(int arr[],int n,int start)
{
    //cout<<"d";
    int temp;
    if(start>=n)
    return;
        temp=arr[start];
        arr[start]=arr[n];
        arr[n]=temp;
        n--;
        start++;
        reversearray_recursion(arr,n,start);   
   
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarr(arr,n);
    reversearray_recursion(arr,n-1,0);
    printarr(arr,n);
   
    return 0;
}

