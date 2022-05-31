// Insert a new element at the end  position.


#include<bits/stdc++.h> 
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array::"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element::"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element at the last index::"<<endl;
    cin>>arr[n-1];
    cout<<"New array is::"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

 return 0;
}

