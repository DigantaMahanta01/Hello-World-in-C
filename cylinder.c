#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a = 3.14;
    int r;
    printf("Enter the radius of the circle: ", r);
    scanf("%d", &r);
    int h;
    printf("Enter the height of cylinder: ", h);
    scanf("%d", &h);
    printf("The area of circle is: %f\n", (a * (r * r)));
    printf("The area of cylinder is: %f", (a * (r * r) * h));
    return 0;
}