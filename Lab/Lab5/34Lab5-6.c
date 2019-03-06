/*Lab5-6 
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <string.h> 
int main()
{
    float num, sum, avg, max=0, min=0;
    int count;
    scanf("%d", &count);
    for(int i=0; i<count; i++){
        scanf("%f", &num);
        if(num>max)
        {
            max = num;
        }
        if(i == 0 || num <= min)
        {
            min = num;
        }
        sum += num;
    }
    avg = sum/count;
    printf("%d Values\n", count);
    printf("Min: %.3f\n", min);
    printf("Max: %.3f\n", max);
    printf("Avg: %.2f", avg);
}