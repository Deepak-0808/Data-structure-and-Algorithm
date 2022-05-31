#include<bits/stdc++.h> 
using namespace std;

int main(){
    int testcase,num1,num2;
    cin>>testcase;
    while(testcase--)
    {
        cin>>num1>>num2;
        if(num1>num2)
        {
            cout<<num1<<" ";
        }
        else
        {
            cout<<num2<<" ";
        }
        cout<<num1+num2;
    }
    return 0;
}