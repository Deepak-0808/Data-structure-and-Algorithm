// #include<bits/stdc++.h> 
// using namespace std;

// int main(){
//     int t,N,a,b,c,ans;
//     cin>>t;
//     while(t--)
//     {
//         cin>>N;
//         a=b=c=1;
//         ans=0;
//         while(a<=N)
//         {
//             b=1;
//             while(b<=N)
//             {
//                 c=1;
//                 while(c<=N)
//                 {
                   
//                     if(a%b==c&&b%c==0)
//                     {
//                         ans++;
                        
//                     }
//                 c++;   
//                 }
//             b++;
//             }
//         a++;
//         }
        
//         cout<<ans<<endl;

//     }
//     return 0;
// }




#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,N,a,b,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>N;
        ans=0;
        for(a = 1; a <= N; a++)
        {
            for(b = a; b <= N; b+=a)
            {
                if(b % a == 0)
                {
                    for(c = a; c <= N; c+=b){
                        if(c%b==a){
                            ans++;
                        }
                    }
                }
            }
        }
        
        cout<<ans<<endl;

    }
    return 0;
}
