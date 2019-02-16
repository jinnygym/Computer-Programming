/*Homework4-3
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <math.h>
int main()
{
    int price, count;
    float per;
    scanf("%d%f%d",&price ,&per ,&count);
    float pro1 = ((100-per)/100)*price*count;
    float pro2 = price * (count - floor(count/3));
    if(pro2 < pro1)
    {
        printf("Buy 2 Get 1\n");
        printf("%.2f", pro2);
    }
    else
    {
        printf("Discount %.0f%%\n", per);
        printf("%.2f", pro1);
    }
}