/*Lab5-3: n to 0
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
int main()
{
    int num;
    scanf("%d", &num);
    if (num >= 0) {
        do
        {
            printf("%d ", num);
            num--;
        }while(num >= 0); //5 : 5 4 3 2 1 0
    }
    else
    {
        do
        {
            printf("%d ", num);
            num++;
        }while(num <= 0); //-5 : -5 -4 -3 -2 -1 0
    }
    return 0;
}