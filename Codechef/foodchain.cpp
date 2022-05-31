#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,answer,num1,num2,rem;
    cin>>t;
    while(t--)
    {   
        answer=0;
        cin>>num1>>num2;
        while(num1>0)
        {
          num1=num1/num2;
          answer++;
        }  
        cout<<answer<<endl;

    }
    

    return 0;
}