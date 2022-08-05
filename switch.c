#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,m;
    printf("Enter the number: ",a);
    scanf("%d",&a);
    printf("Enter the Multiple: ",m);
    scanf("%d",&m);

    switch (a)
    {
    case 1: 
        printf("The Number is 1\n");
        switch (m)
        {
            case 10:
            printf("The Multiple is 10\n");
            break;

            default:
            printf("The Multiple isn't 10\n");
        }
        break;
    
    case 2:
    printf("The Number is 2\n");
    switch (m)
    {
        case 20:
            printf("The Multiple is 20\n");
            break;

            default:
            printf("The Multiple isn't 20\n");
    }
    break;    
    
    default:
    printf("The Number doesn't belong\n");
    printf("The Multiple ain't too");
    }
    return 0;
}