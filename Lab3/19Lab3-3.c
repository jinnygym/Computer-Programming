/*Lab 3-3
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    int sec;
    scanf("%d", &sec);
    int day = sec/86400;
    int hour = (sec%86400)/3600;
    int min = (sec%3600)/60;
    int second = sec%60;
    printf("%d s = %d d %d h %d m %d s", sec, day, hour, min, second);
    return 0;
}