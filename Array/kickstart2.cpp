#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,count=0;
    cin>>t;
    while(t--)
    {
        count++;
        string str;
        cin>>str;
        char last = str[str.size()-1];
        cout<<last<<endl;
        if(last=='y')
        {
            cout<<"Case #"<<count<<": "<<str<<" is ruled by nobody."<<endl;
        }
        else if(last=='a'||last=='e'||last=='i'||last=='o'||last=='u'||last=='A'||last=='E'||last=='I'||last=='O'||last=='U')
        {
            cout<<"Case #"<<count<<": "<<str<<" is ruled by Alice."<<endl;
        }
        else
        cout<<"Case #"<<count<<": "<<str<<" is ruled by Bob."<<endl;

    }
    return 0;
}
