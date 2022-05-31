#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,total=0,ans=0;
	    cin>>n>>k; 
	    for(int i=1;i<=k;i++){
	        total=n%i;  
	        if(total>ans){
	            ans=total; 
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
