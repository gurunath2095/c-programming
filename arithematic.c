#include<stdio.h>
int main()
{
    int a,b,c,n;
    float x;
    printf("\nEnter 2 Nos : ");
    scanf("%d%d",&a,&b);
      printf("\nEnter number : ");
    scanf("%d",&n);
    if(n=1)
    {
    c=a+b;
    printf("\nTotal : %d",c);
    }
	if(n=2)
	{
    c=a-b;
    printf("\nDifference : %d",c);
    }
	if(n=3)
	{
    c=a*b;
    printf("\nMul : %d",c);
    }
	if(n=4)
    x=(float)a/(float)b;
    printf("\nDiv : %0.2f",x);
    return 0;
}
