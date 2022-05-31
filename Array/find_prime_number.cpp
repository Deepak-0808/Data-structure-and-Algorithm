#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int i;
    cout << "Enter two number";
    cin>>num1>>num2;
    cout<<"These are the prime number between\t"<<num1<<"\tand\t"<<num2<<endl;
    for(num1; num1<=num2; num1++)
    {
      for(i=2;i<num1;i++)
      {
        if(num1%i==0)
        {
          
          break;
        }
      }
      if(i==num1)
      {
        cout<<num1<<endl;
      }
    }
     
  return 0;
}
                                                                                              