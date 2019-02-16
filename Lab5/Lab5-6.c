/*Lab5-6
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i=0, sum=0, max=0, min;
    float avg;
    scanf("%d", &num);
    min = num;
    max = num;
    for(i=1;i<=num;i++);
    {
        if(num>max)
        {
            max = num;
        }
        else if(num<min)
        {
            min = num;
        }
        sum = sum + num;
    }
    avg = sum/num;
    printf("%d Values\n", num);
    printf("Min: %.3f\n", min);
    printf("Max: %.3f\n", max);
    printf("Avg: %.2f", avg);
    getch();

}