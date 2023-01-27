#include<stdio.h>
#include<math.h>
 
int main(){
  
  float a,b,c;
  float d,root1,root2;  
  printf("Enter the quadratic equation in the format ax^2+bx+c: ");
  scanf("%fx^2%fx%f",&a,&b,&c);
  float discriminant;
  discriminant = b * b - 4 * a * c;
  if(discriminant > 0){
    printf("Roots are imaginary number.\n");
}
   if(discriminant<0)
   {
   	printf("Roots are distinct number.\n");
   }
   	 if(discriminant==0)
   {
   	printf("Roots are real and equal number.\n");
   }
   	
   
}
