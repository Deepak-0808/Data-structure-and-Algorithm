#include <stdio.h>
#include <math.h>
void sine_cos();
int main()
{
   sine_cos();
  return 0;
}
   void sine_cos()
   {
        double interval, i = 0;
        printf("Enter the desired interval (eg. 0.1):\n");
        scanf("%lf", &interval);
        for (; i <= 1; i += interval) 
        {
        printf("sin(%f)=%f\n", i, sin(i));
        printf("cos(%f)=%f\n", i, cos(i)); 
        }
    }