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
{  
    int n;
    cout<<"Enter the total number of student : ";
    cin>> n;
    cout<<endl;
    boy student[n];
    int x;
    float total_fine=0;
    for( x=0;x<n;x++)
    {
       cout<<"******* Enter the details of student "<<x+1<<" ********"<<endl;
       cout<<"Inter the name : ";
       cin>>student[x].name;
       cout<<"Inter the roll number : ";
       cin>>student[x].roll;
       cout<<"Enter the fine : ";
       cin>>student[x].fine;
       total_fine=total_fine+student[x].fine;
       cout<<"\n";
    }
    cout<<"***********Saved the details of the students************";
    for(x=0;x<n;x++)
    {
        cout<<"Details of student "<<x+1<<endl;
        cout<<"name : "<<student[x].name<<endl;
        cout<<"roll : "<<student[x].roll<<endl;
        cout<<"fine : "<<student[x].fine<<endl;
    }
        cout<<"Total fine : "<<total_fine;
return 0;
}            