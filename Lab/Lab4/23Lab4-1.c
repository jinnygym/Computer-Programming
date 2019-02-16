/*Lab 4-1
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    int num1, num2;
    int ans;
    scanf("%d %d", &num1, &num2);
    if (num1 == num2){
        ans = num1 + num2;
        printf("%d + %d = %d", num1, num2, ans);
    }
    else{
        ans = num1 - num2;
        printf("%d - %d = %d", num1, num2, ans);
    }
    return 0;
}