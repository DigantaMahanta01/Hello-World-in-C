#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter The table you want the Multiple of: ");
    scanf("%d",&n);
    printf("The Multiplaction table of %d is:\n",n);
    for (i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
        return 0;
} 