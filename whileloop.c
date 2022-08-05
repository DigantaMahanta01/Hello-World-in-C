#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("Enter The number:");
    scanf("%d",&i);
    while (i<100)
    {
        printf("%d\n",i);
        i = i+1;
    }
    return 0;
}