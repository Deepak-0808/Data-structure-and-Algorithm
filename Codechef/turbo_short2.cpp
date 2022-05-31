#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,r=0,temp=0;
    cin >> t;
    int arr[t];
    while  (r<t)
    {
        cin >> arr[r];
        r++;
    }
    sort(arr,arr+t);
       for( r=0;r<t;r++)
     {
         cout<<arr[r]<<endl;
     }
    return 0;
}