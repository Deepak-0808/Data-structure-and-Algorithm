


#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,A1,A2,A3,A4;
    cin>>t;
    while(t--)
    {
        cin>>A1>>A2>>A3>>A4;
        if(A1==A2&&A1==A3&&A1==A4)
        {
            cout<<"0"<<endl;
           
        }
        else if((A1==A2&&A1==A3&&A1!=A4)||(A2==A3&&A2==A4&&A2!=A1)||(A1==A2&&A1==A4&&A1!=A3)||(A1!=A2&&A1==A3&&A1==A4))
        {
            cout<<"1"<<endl;
            
        }
        else if((A1==A2&&A3!=A4)||(A1!=A2&&A3==A4)||(A1==A4&&A2!=A3)||(A1!=A4&&A2==A3)||(A1==A3&&A2!=A4)||(A1!=A3&&A2==A4))
        {
            cout<<"1"<<endl;
           

        }
        else if((A1==A2&&A3==A4)||(A1==A4&&A2==A3)||(A1==A3&&A2==A4))
        {
            cout<<"2"<<endl;
        }
        //if(A1!=A2&&A1!=A3&&A1!=A4)
        else
        {
            cout<<"2"<<endl;
           
        }
        
    }
    return 0;
}