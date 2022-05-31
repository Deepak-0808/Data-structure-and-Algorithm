#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,num,i;
    cin>>t;
    while(t--)
    {
        cin>>num;
        for( i=2;i<num;i++)
        {
            if(num%i==0)
            break;

        }
        if(i==num)
        {
            cout<<"Yes"<<endl;
        }
        else
             cout<<"No"<<endl;

        
    }
    return 0;
}