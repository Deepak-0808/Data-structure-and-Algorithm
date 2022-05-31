#include<bits/stdc++.h> 
using namespace std;

int main(){
    int testcase,angel1,angel2,angel3,sum_of_angel;
    cin>>testcase;
    while(testcase--)
    {
       cin>>angel1>>angel2>>angel3;
       sum_of_angel=angel1+angel2+angel3;
       if(sum_of_angel==180)
       {
           cout<<"YES"<<endl;
       }
       else
       cout<<"NO"<<endl;
    }    
    return 0;
}