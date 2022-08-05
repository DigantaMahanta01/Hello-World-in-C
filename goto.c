#include<stdio.h>
int main(int argc, char const *argv[])
{
    label:
    printf("We Start \n");
    goto end;
    printf("Hello World \n");
    goto label;
    end:
    printf("We End");
    return 0;
}
