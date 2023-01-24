#include<stdio.h>
main()
{
int n,m,reverse=0;
printf("\n enter a number\n ");
scanf("%d",&n);
while(n!=0)
{m=n%10;
reverse=reverse*10+m;
n/=10;
}
printf("reversed number=%d",reverse);
}
  
