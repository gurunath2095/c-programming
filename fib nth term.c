#include <stdio.h>
long fibonacciRecursive(int num)
{
    if (num <= 1)
        return num;
    return fibonacciRecursive(num - 1) + fibonacciRecursive(num - 2);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nThe %dth fibonacci number is %ld", num, fibonacciRecursive(num));
    return 0;
}
