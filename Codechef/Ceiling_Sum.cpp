#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,num1,num2,x,ans;
    cin>>t;
    while(t--)
    {   
        ans=0;
        cin>>num1>>num2>>x;
        ans=((num2-x)/2)+((x-num1)/2);
        cout<<ans<<endl;

    }
    return 0;
}