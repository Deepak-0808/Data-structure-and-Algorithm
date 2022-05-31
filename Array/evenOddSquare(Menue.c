#include<stdio.h>
#include<math.h>

 void EvenOrOdd()
 {
     int num;
     printf("Enter a number:- ");
     scanf("%d",&num);
     if(num%2==0)
     printf("Even Number\n");
     else
     printf("Odd Number\n");

 }
 void PosOrNeg()
 {
     int num;
     printf("Enter a number:- ");
     scanf("%d",&num);
     if(num <0)
     printf("Negative Number\n");
     else
     printf("Positive Number\n");

 }

void Square()
{
    int num,square;
    printf("Enter a number:- ");
     scanf("%d",&num);
     square=num*num;
     printf("Square = %d\n",square);

}
void SquareRoot()
{
    int num,squareR;
    printf("Enter a number:- ");
     scanf("%d",&num);
     squareR=sqrt(num);
     printf("Square Root = %d\n",squareR);
    
}
int main(){

    while (1)
    {
        int choice;
       printf( "\n 1. EVEN OR ODD\n");
       printf( "2. POSITIVE OR NEGATIVE\n");
       printf( "3. SQUARE\n");
       printf( "4. SQUARE ROOT\n");
       printf( "5. Exit\n");

       printf( " Enter your choice:- ");
      
       scanf("%d",&choice);
        switch (choice)
        {
        case 1:
           EvenOrOdd();
            break;
        case 2:
            PosOrNeg();
            break;
        case 3:
            Square();
            break;
        case 4:
            SquareRoot();
            break;
        case 5:
           return 0;
            
        default:
            printf( "Enter valid choice\n");
            break;
        }
    }

    return 0;
}
  