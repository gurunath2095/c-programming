#include<stdio.h>
int main()
{
    int a,b,c,n;
    float x;
    printf("\nEnter 2 Nos : ");
    scanf("%d%d",&a,&b);
    printf("\nEnter number : ");
    scanf("%d",&n);
    switch(n)
    {case 1:
    c=a+b;
    printf("\nTotal : %d",c);
    break;
    case 2:
	c=a-b;
    printf("\nDifference : %d",c);
    break;
    case 3:
	c=a*b;
    printf("\nMul : %d",c);
    break;
    case 4:
    x=(float)a/(float)b;
    printf("\nDiv : %0.2f",x);
    break;
    default:
    	printf("no number\n");
}
    return 0;
}
