// Insert a new element at a given index.

#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n,num;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index;
    cout<<endl<<"Enter the index where you want to insert the number : "<<endl;
    cin>>index;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(index==i)
        {
            arr[i]=num;
        }
    }
    cout<<"New array :: "<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}