#include<bits/stdc++.h> 
using namespace std;

int main(){
    int testcase,count=0;
    cin>>testcase;
    while (testcase--)          
    {
        count++;
        int N,M,sum=0;
        cin>>N>>M;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            sum+=arr[i];
        }        
        sum=sum%M;
        cout<<"Case #"<<count<<": "<<sum<<endl; 
        

    }
    
    return 0;
}