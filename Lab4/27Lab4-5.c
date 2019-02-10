/*Lab4-5 Select one ways from these
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main () {
    int num; //num = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    scanf("%d", &num);
    switch(num) {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        default : //num != 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
            printf("error");
            break;
    }
    return 0;
}