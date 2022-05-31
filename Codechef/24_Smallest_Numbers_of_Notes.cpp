#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,num,sum,Q,arr[]={1,2,5,10,50,100};
    cin>>t;
    while(t--)
    {
        cin>>num;
        sum=0;
        for(int x=5;x>=0;x--)
        {
            Q=num/arr[x];
            sum=sum+Q;
            num=num%arr[x];

   
        }
        cout<<sum<<endl;
    }

    return 0;
}