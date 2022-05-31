#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,num1;
    cin>>t;
    while(t--)
    {  
        int sum=0;
        cin>>num1;
        while(num1>0)
        {
        int r=0;
        r=num1%10;
        num1=num1/10;
        sum=(sum*10)+r;
        }
        cout<<sum;
        
    }
    return 0;
}  
