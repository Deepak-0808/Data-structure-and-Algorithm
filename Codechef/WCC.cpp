 #include<bits/stdc++.h> 
using namespace std;

int main(){
    int test;
    
    
    cin>>test;
    while(test--)
    { 
        int x=0,a=0,b=0;
        string s;
       cin>>x>>s;
       for (int i=0;i<s.size();i++)
       {
          if(s[i]=='C')
          {
           a+=2;
          }
          else if(s[i]=='N')
          {
              b+=2;
          }
          else
          {
              a+=1;
              b+=1;
          }
          
       }
       if(a>b)
       {
           cout<<x*60<<endl;
       }
       else if(b>a)
       {
           cout<<x*40<<endl;
       }
       else 
       {
           cout<<x*55<<endl;
       }
        
    }
 return 0;
}
       
