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
            cout<<">"<<endl;
        }
        else if(num2>num1)
        {
            cout<<"<"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
    }
    return 0;
}