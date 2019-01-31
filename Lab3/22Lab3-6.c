/*Lab 3-6
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Perimeter of rectangle = %.4f units", (a + a + b + b));
    return 0;
}