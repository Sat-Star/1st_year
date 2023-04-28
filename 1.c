#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, r1, r2, d, rpart, ipart;
    printf("Enter the non zero coefficient values of a, b and c:\n");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d == 0)
    {
        printf("\nThe roots are real and equal\n");
        r1 = -b / (2 * a);
        r2 = r1;
        printf("\nRoot1=%f\nRoot2=%f", r1, r2);
    }
    else if (d > 0)
    {
        printf("\nThe roots are real and distinct\n");
        r1 = ((-b) + sqrt(d)) / (2 * a);
        r2 = ((-b) - sqrt(d)) / (2 * a);
        printf("Root1=%f\nRoot2=%f\n", r1, r2);
    }
    else
    {
        printf("\nThe roots are imaginary\n");
        rpart = -b / (2 * a);
        ipart = sqrt(fabs(d)) / (2 * a);
        printf("Root1=%f+i%f\n", rpart, ipart);
        printf("Root2=%fi%f\n", rpart, ipart);
    }
    return 0;
}
