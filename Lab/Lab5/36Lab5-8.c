/*Lab5-8
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
int main()
{
    int age, height, weight;
    float h=0, w=0;
    int a=0, p1=0, p2=0, p3=0, p4=0;
    for(int i = 0; i<50; i++){
        scanf("%d %d %d", &age, &height, &weight);
        a = a + age; h = h + height; w = w + weight;
        if(age>=20 && height>=160)
        {
            p1++;
        }
        if(age<20 && (height<=180 || weight>=60))
        {
            p2++;
        }
        if(age>=30 && weight>=40 && weight<=80)
        {
            p3++;
        }
        if(age<40 && (weight<85 || height<=200))
        {
            p4++;
        }
    }
    printf("Age >= 20 and Height >= 160: %d\n", p1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", p2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", p3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", p4);
    printf("Average Age: %d\n", a/50);
    printf("Average Height: %.2f\n", h/50);
    printf("Average Weight: %.2f", w/50);
    return 0;
}