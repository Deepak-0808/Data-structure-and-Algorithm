#include <iostream>
using namespace std;
void reminder()
{
    int rem,x,y,test;
    cin>>test;
    while(test--)
    {
    cin>>x>>y;
    rem=x%y;
    cout<<rem;
    }
}

int main(){
    
    reminder();
    return 0;
}