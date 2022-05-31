#include<iostream>
using namespace std;
class boy
{  
    public:
    string name;
    int roll;
    float fine;
};

int main()
{   int n;
    cout<<"Enter the number of student";
    cin>> n;

    boy student[n];
    int x;

    for( x=0;x<n;x++)
    {
       cout<<"Enter the details of student "<<x+1<<"\n";
       cout<<"Inter the name\n";
       cin>>student[x].name;
       cout<<"Inter the roll number\n";
       cin>>student[x].roll;
       cout<<"Enter the fine\n";
       cin>>student[x].fine;
    }
return 0;
}