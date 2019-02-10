/*Lab 4-2
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    double n1, n2, n3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if ((n1<n2 && n1>n3) || (n1>n2 && n1<n3)){
        printf("%.2f", n1);
    }
    else if ((n2<n1 && n2>n3) || (n2>n1 && n2<n3)){
        printf("%.2f", n2);
    }
    else if ((n3<n1 && n3>n2) || (n3>n1 && n3<n2)){
        printf("%.2f", n3);
    }
}