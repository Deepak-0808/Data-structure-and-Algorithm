#include<bits/stdc++.h> 
using namespace std;

void solve()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr, arr+n);
   int answer=arr[0]+arr[1];
   cout<<answer<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}