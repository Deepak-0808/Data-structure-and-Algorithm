#include<iostream>
using namespace std;

class counter
{
    int n;
    static int count;
    public:
    
    void getdata(int number)
    {
        n=number;
        count++;
    }
    void show()
    {
        cout<<count;
    }
};

int counter::count;
int main()
{
    counter c1,c2,c3,c4;
    c1.show();
    c2.show();
    c3.show();
    c4.show();
    c1.getdata(10);
    c2.getdata(10);
    c3.getdata(10);
    c4.getdata(10);
    cout<<endl;
    c1.show();
    c2.show();
    c3.show();
    c4.show();
    
    return 0;
}