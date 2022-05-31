#include<bits/stdc++.h> 
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr,arr+(r));
        
            return arr[k-1];
    }

int main(){
     int arr[]={10,20,30,40,50,60};
     int k=3;
    int r = sizeof(arr)/sizeof(arr[0]);
    cout<<kthSmallest( arr, 0,  r, k);
    return 0;
}