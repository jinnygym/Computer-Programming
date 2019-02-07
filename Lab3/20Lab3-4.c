/*Lab 3-4
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double c = pow(a, 2) + pow(b, 2);
    printf("%.2f", sqrt(c));
    return 0;
}