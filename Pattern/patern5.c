#include<stdio.h>

int main()
{
     char y,z;
       for (y='A';y<'F';y++)
       {
           for(z='A';z<'F';z++)
           {
               printf("%c",y);
           }
           printf("\n");
       }
       return 0;
}