/* Homework7-2 Fibonacci
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <string.h>
int main(){
    char one[100], two[100], ans[200];
    int num;
    scanf("%s %s %d", one, two, &num);
    for(int i = 0; i < num-2; i++)
    {
        strcpy(ans, one); //copy ans = num
        strcat(ans, two); //cat ans + two

        strcpy(one, two); //copy one = two
        strcpy(two, ans); //copy two = ans
    }
    printf("%s", ans);
}