#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("Enter Number: ",i);
    scanf("%d",&i);
    printf("Enter another one: ",n);
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}