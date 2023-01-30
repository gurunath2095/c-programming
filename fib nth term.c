#include <stdio.h>
long fr(int num)
{
    if (num <= 1)
        return num;
    return fr(num - 1) + fr(num - 2);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nThe %dth fibonacci number is %ld", num, fr(num));
    return 0;
}
