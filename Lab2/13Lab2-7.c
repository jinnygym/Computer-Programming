/*Lab 2-7
By: Suphitsara Cheevanantaporn 61070230
--Input--                 --Output--
Faculty                 String 1: Fac
Information             String 2: Info
Technology              String 3: Techn
Ladkrabang              String 4: Ladkra
*/
#include <stdio.h>
int main() 
{
    char text1[30], text2[30], text3[30], text4[30];
    scanf("%s", text1);
    scanf("%s", text2);
    scanf("%s", text3);
    scanf("%s", text4);
    printf("String 1: %.3s\n", text1);
    printf("String 2: %.4s\n", text2);
    printf("String 3: %.5s\n", text3);
    printf("String 4: %.6s", text4);
    return 0;
}