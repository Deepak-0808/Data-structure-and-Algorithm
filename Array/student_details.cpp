
#include<iostream>
using namespace std;

struct details
{
    string name;
    int roll_num;
    float math,eng,science;


};
 
 int main()
 {
    int x;
    float avg,percentage;
    struct details student[3];

    for(x=0;x<3;x++)
    {
    cout<<"\n\n***********Enter details for "<< x+1 <<" student*************\n";    
    cout<<"Enter student name\n";
    cin>>student[x].name;
    cout<<"Enter student roll number\n";
    cin>>student[x].roll_num;
    cout<<"Enter math marks\n";
    cin>>student[x].math;
    cout<<"Enter eng marks\n";
    cin>>student[x].eng;
    cout<<"Enter science marks\n";
    cin>>student[x].science;
    avg=(student[x].math+student[x].eng+student[x].science)/3;
    percentage=((student[x].math+student[x].eng+student[x].science)*100)/300;
    cout<<"percentage of "<<student[x].name<<": "<<percentage<<"\n";                           
    cout<<"Average of "<<student[x].name<<": "  <<avg<<"\n";
    }
    return 0;
 }