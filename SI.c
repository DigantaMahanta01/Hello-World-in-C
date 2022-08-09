#include <stdio.h>
int main(int argc, char const *argv[])
{
    int p, r,t,si;

    printf("Enter The Principal: ", p);
    scanf("%d", &p);
    printf("Enter The Rate: ", r);
    scanf("%d", &r);
    printf("Enter The Time: ", p);
    scanf("%d", &t);

    printf("The Simple Interest is: %d", si=(p * r * t / 100));
    return 0;
}