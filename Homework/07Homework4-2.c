/*Homework4-2
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
    return 0;
}