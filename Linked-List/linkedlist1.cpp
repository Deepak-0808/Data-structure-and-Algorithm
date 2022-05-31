#include<bits/stdc++.h> 
using namespace std;

struct class1
{
   int value;
   struct class1 *link;
};

int main(){
    struct class1 stu1, stu2,stu3;
    stu1.value=10;
    stu1.link=NULL;
    stu2.value=20;
    stu2.link=NULL;

    stu1.link=&stu2;
    stu2.link=&stu3;     
    cout<<stu1.link->link; 
    return 0;
}