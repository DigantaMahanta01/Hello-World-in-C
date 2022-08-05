#include <stdio.h>
int main(void)
{
  float a, b, x;
  printf("Enter value of a: ");
  scanf("%f", &a);
  
  printf("Enter value of b: ");
  scanf("%f", &b);

  x = (a+b) * (a * a) + (b * b) - (a * b);

  printf("Result = %f\n", x);
  printf("The value is: \n");
  return 0;
}