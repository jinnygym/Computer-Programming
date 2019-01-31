/*Homework3-1
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <math.h>
int main()
{
    float price, d, h;
    scanf("%f %f %f", &price, &d, &h);
    printf("Volume : %.2fml\n", (h*3.14159265359*pow(d/2, 2)));
    printf("Baht/ml : %.4f", (price/(h*3.14159265359*pow(d/2, 2))));
    return 0;
}
