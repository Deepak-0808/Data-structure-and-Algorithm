 #include<bits/stdc++.h> 
using namespace std;

int main(){
    int test,num1,sum,y=0;
    cin>>test;
    while(test--)
    {   
        sum=0;
        cin>>num1;
        while(num1>0)
        {
        y=num1%10;
        sum=sum+y;
        num1=num1/10;
        }
        cout<<sum<<endl;
    }

    return 0;
}
       
