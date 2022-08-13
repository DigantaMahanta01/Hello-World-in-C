#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your Marks:",a);
    scanf("%d",&a);
    if(a>=90)
    {
        printf("You got A");
    }
    else if (a>=80)
    {
        printf("You got B");
    }
    else if (a>=70)
    {
        printf("You got C");
    }
    else if (a>=60)
    {
        printf("You got D");
    }
    else
    {
        printf("You Failed Nigga!");
    }
    return 0;
}
