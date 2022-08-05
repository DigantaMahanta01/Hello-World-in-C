#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,c;
    a=10;
    b=15;
    c= sum(a,b);
    printf("The sum is %d\n",c);
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}