# include <stdio.h>
# include <stdlib.h>
int main(){
    
    int P, R, T,SI;
    printf("Enter the principal: ");
    scanf("%d", &P);
    printf("Enter the rate: ");
    scanf("%d", &R);
    printf("Enter the time: ");
    scanf("%d", &T);
    SI = (P * R * T) / 100;
    printf("The Simple interest is %d ", SI);
    return 0;
}
