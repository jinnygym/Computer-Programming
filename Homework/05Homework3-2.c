/*Homework3-2
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float ans1 = (a * b) / 100;
    float ans2 = a - ans1;
    float ans3 = ans2 * c;
    printf("%.2f", ans3);
    return 0;
}