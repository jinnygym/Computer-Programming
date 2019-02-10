/*Lab4-6
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
#include <ctype.h>
int main ()
{
    char str[];
    scanf("%c", &str);
    if (isdigit(str[0]))
    {
        printf("number");
    }
}