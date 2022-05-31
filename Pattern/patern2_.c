#include<stdio.h>

int main()
{   
    int x,y,z;
       for (y=1;y<= 5;y++)
        {
          if (y==1)
          {
              for ( z=1;z<=5;z++)
              {
                  printf("1");
              }
             printf("\n");  
          }
          else if(y==2)
          {
             for ( z=1;z<=5;z++)
              {
                  printf("2");
              } 
              printf("\n"); 
          }
          
           else if(y==3)
          {
             for ( z=1;z<=5;z++)
              {
                  printf("3");
              } 
              printf("\n"); 
          }
           else if(y==4)
          {
             for ( z=1;z<=5;z++)
              {
                  printf("4");
              } 
              printf("\n"); 
          }
           else if(y==5)
          {
             for ( z=1;z<=5;z++)
              {
                  printf("5");
              }
              printf("\n"); 
          }
        }
     
    return 0;
}