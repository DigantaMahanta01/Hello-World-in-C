#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter The Number for Factorial: ");
    scanf("%d",&n);
    printf("The Factorial of %d is %d\n",n,factorial(n));
    return 0;
}