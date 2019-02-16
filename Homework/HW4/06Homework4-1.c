/*Homework4-1
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    char text;
    scanf("%c", &text);
    if (text >= 65 && text <= 90) { //A-Z
        printf("%c", text + 32);
    }
    else if (text >= 97 && text <= 122) { //a-z
        printf("%c", text - 32);
    }
    else {
        printf("error");
    }
}