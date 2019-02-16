/*Homework5-3
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    int num_m, num_n;
    scanf("%d %d", &num_m, &num_n);
    if (num_m > num_n) {
        do
        {
            printf("%d ", num_m);
            num_m--;
        } while (num_m >= num_n);
    }
    else
    {
        do
        {
            printf("%d ", num_m);
            num_m++;
        } while (num_m <= num_n);
    }
    return 0;
}