#include<iostream>
using namespace std;
namespace num1
{   
   void same()
    {
     int x,y;
     cout<<"Enter the two number :\n";
    cin>>x>>y;
    cout<<"The sum is : "<<x+y<<endl; 

    }

}
namespace num2
{
void same()
    {
     int x,y;
     cout<<"Enter the two number:\n";
    cin>>x>>y;
    cout<<"The sum is : "<<x+y<<endl; 

    }
}    
 int main()
 {
     num1::same();
     num2::same();
     return 0;
 }