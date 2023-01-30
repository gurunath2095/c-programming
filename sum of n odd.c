#include<stdio.h>
 int main()
{
  int i, n, Sum = 0;
  printf("\n Enter the Maximum Limit Value : ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++)
  {
  	if ( i%2 != 0 ) 
  	{
  		
        Sum = Sum + i;
  	}
  }
  printf("\n \n The Sum of Odd numbers from 1 to %d  = %d", n, Sum);
  return 0;
}
