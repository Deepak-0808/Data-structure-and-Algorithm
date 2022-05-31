// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, j,k=0;
//     for (i = 1; i <= 7; i++)
//     {   
//         if(i<=4)
//         k++;
//         else
//         k--;
//         for (j = 1; j <= 4; j++)
//         {

//             if (j >= 1 && j <= k)
//             {
//                 cout << "*";
//             }
//             else
//                 cout << " ";
//         }
//         cout << endl; 
//     }
//     return 0;
// }


#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int row,star=0;
    cin>>row;
    for(int x=1;x<=row;x++)
    {
         if(row<=(row+2)/2)
        star++;
        else
        star--;
         for(int colom=1;colom<=4;colom++)
        {
            if(colom <=star)
            cout<<"*";
            else
            cout<<" ";
            

        }
         cout<<endl;

     
    }
    return 0;
}

