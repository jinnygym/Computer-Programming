/*Homework2-3
By: Suphitsara Cheevanantaporn 61070230
Sample Input	 Sample Output
34651            3
                  34
                   346
                    3465
                     34651*/
#include <stdio.h>
int main()
{
    char num[5];
    scanf("%s", num);
    printf("%-81.1s", num);
    printf("%-81.2s", num);
    printf("%-81.3s", num);
    printf("%-81.4s", num);
    printf("%-80.5s", num);
    return 0;
}