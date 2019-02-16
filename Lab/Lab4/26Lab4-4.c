/*Lab4-4 (Grade) 
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    float g;
    scanf("%f", &g);
    if (g >= 80 && g <= 100){
        printf("A");
    }
    else if (g >= 70 && g < 80){
        printf("B");
    }
    else if (g >= 60 && g < 70){
        printf("C");
    }
    else if (g >= 50 && g < 60){
        printf("D");
    }
    else if (g >= 0 && g < 50){
        printf("F");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}