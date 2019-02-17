/*Homework5-5
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
int main()
{
    int num1=1, num2, sum=0, ans;
    while(1){
        scanf("%d", &num2);
        if(num2 == 0){ // 0 >> break;
            break;
        }
        ans = num1 % num2;
        sum += ans; //sum = 0
        num1 = num2;
    }
    printf("%d", sum);
    return 0;
}