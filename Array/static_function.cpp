#include<iostream>
using namespace std;
class  counter
{
   int a;
   static int count;
   public:
	 void assign()
     {
	    ++count;
	    a=count;
	 }	 
	 void outputa()
	 {
	    cout<<a;
	 }
	 
	 static void outputc()
	 {
	     cout<<count;
	 }
 };
	 int counter :: count;
	 int main()
	 {
	 	counter c1,c2,c3;
	 	counter :: outputc();
	 	c1.assign();
	 	c2.assign();
	 	c3.assign();
	 	counter :: outputc();
	 	c1.outputa();
	 	c2.outputa();
	 	c3.outputa();
	 	return 0;
	 }