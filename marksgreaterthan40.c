#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z;
    float sum;
    printf("Enter The marks you Got in Physics: ",x);
    scanf("%d",&x);
    printf("Enter The marks you Got in Chemistry: ",y);
    scanf("%d",&y);
    printf("Enter The marks you Got in Biology: ",z);
    scanf("%d",&z);
    sum=(x+y+z/3);
    if ((sum<40) || x<33 || y<33 || z<33)
    {
        printf("You Failed");
    }
    else
    {
        printf("You Passed");
    }
    return 0;
}