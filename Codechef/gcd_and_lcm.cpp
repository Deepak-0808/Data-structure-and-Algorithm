#include<bits/stdc++.h> 
using namespace std;
void gcd_lcm(int a,int b)
{
long long int x=a;
long long int y=b;
while(a!=b)
{
if(a>b)
{
a=a-b;
}
else
b=b-a;     
}
 
long long int lc=(x*y)/a;
cout<<a<<" "<<lc<<endl;
}

int main(){
   long long int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        gcd_lcm(a,b);
    }
    return 0;
}