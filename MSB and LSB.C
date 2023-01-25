#include <stdio.h>
int main()
{

    int n, sum=0, lsb, msb;
  
    printf("Enter number = ");
    scanf("%d", &n);
  
    msb = n % 10;
    while(n >= 10)
    
    {
        n = n / 10;
    }
    lsb = n;
   
    printf("LSB = %d and MSB = %d\n\n", lsb,msb);
    
}
