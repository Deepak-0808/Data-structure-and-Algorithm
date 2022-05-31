#include<bits/stdc++.h> 
using namespace std;

int main(){
    int test,num1,num2=0,x,y=0;
    
    cin>>test;
    while(test--)
    {
       cin>>num1;
       y=num1%10;
       while(num1>=10)
       {
         num1=num1/10;
       }
    cout<<y+num1<<endl;
    }
    return 0;
}