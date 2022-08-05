#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i=0;
    printf("Enter The Number:");
    scanf("%d",&n);

    do
    {
        printf("%d\n",i);
        i=i+1;
    } while (i<n);
    
    return 0;
}