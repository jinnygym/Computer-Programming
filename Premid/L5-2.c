/*Lab5-2 : n to 1
Input   5
Output  5 4 3 2 1
By: Suphitsara Cheevanantaporn 61070230 */
#include <stdio.h>
int main(){
    int num, ans = 0;
    scanf("%d", &num);
    while(num > ans){
        num--;
        printf("%d ", num+1);
    }
    return 0;
}