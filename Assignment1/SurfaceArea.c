#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double const PI = 3.142;
    double R;

    printf("---Surface Area of a Sphere---");
    printf("\nEnter the radius: ");
    scanf("%lf", &R);
    printf("Surface area of the sphere is %f",4*PI*pow(R,2));
    return 0;
}
