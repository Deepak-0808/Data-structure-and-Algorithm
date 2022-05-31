#include<bits/stdc++.h> 
using namespace std;
void solve(){
    int n,i;
    cin>>n;
    int last=0,start;
    start = pow(10,(n-1));
    while(n--){
        last=(10*last)+9;
    }
    for(i=start;i<=last;i++){
        if(i%2!=0){
            if((i%3==0)&&(i%9!=0)){
                while(i>0)
                {
                    int temp=i%10;
                    if(temp==0)
                   // break;
                    //else
                    i=i/10;
                
                }
                cout<<i<<endl;
                break;
            }
        }
    }
    //cout<<i<<endl;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}