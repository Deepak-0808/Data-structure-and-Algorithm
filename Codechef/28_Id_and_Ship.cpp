#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    char input;
    
    cin>>t;
    while(t--)
    {
        cin>>input;
        if(input=='B'||input=='b')
        {
            cout<<"BattleShip"<<endl;
        }
        else if(input=='C'||input=='c')
        {
            cout<<"Cruiser"<<endl;
        }
        else if(input=='D'||input=='d')
        {
            cout<<"Destroyer"<<endl;
        }
        else if(input=='F'||input=='f')
        {
            cout<<"Frigate"<<endl;
        }

        
    }
    return 0;
}