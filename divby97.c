#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the Number: ",a);
    scanf("%d",&a);
    if (a%97==0)
    {
        printf("The Number is Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}