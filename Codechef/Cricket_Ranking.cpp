#include<bits/stdc++.h> 
using namespace std;

int main(){
    int testcase,run1,wicket1,catches1,sum1;
    int run2,wicket2,catches2,sum2;
    cin>>testcase;
    while(testcase--)
    {
        cin>>run1>>wicket1>>catches1;
        cin>>run2>>wicket2>>catches2;
        sum1=run1+wicket1+catches1;
        sum2=run2+wicket2+catches2;
        if(sum1>sum2)
        {
            cout<<"A"<<endl;
        }
        else
        cout<<"B"<<endl;


        
    }
    return 0;
}