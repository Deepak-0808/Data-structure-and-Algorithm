#include<stdio.h>

int main()
{
     int x,y,z;
       for (y=0;y<5;y++)
       {
           for(z=0;z<=y;z++)
           {
               printf("%d",y+1);
           }
           printf("\n");
       }
}