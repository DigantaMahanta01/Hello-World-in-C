#include <stdio.h>
int main()
{
    int P, R, T, S;
    printf("Enter the principle: \n");
    scanf("%d", &P);
    printf("Enter the rate: \n");
    scanf("%d", &R);
    printf("Enter the time(in Years): \n");
    scanf("%d", &T);

    S = (P * R/100 * T) / 100 ;
    printf("Simple interest is %d\n", S);
}