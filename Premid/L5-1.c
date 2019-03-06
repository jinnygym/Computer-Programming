/*Lab5-1 : 1 to n
Input   10	
Output  1 2 3 4 5 6 7 8 9 10
By: Suphitsara Cheevanantaporn 61070230 */
#include <stdio.h>
int main(){
    int num, ans = 0;
    scanf("%d", &num);
    while(ans < num){
        ans++;
        printf("%d ", ans);
    }
    return 0;
}