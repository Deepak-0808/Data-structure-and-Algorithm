#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,arr[7];
    cin>>t;
    while(t--)
    {
        int count1=0,count2=0;
       for(int i=0;i<7;i++)
       {
           cin>>arr[i];
       }
       for(int i=0;i<7;i++)
       {
           if(arr[i]==1)
           count1++;
           else
           count2++;
       }
       if(count1>count2)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;

    }
    return 0;
}