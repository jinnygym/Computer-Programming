/*Lab5-2: n to 1
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
int main()
{
    int num;
    scanf("%d", &num);
    do
    {
        printf("%d ", num);
        num--;
    } while (num > 0);
    return 0;
}