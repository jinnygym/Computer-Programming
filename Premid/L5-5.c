/*Lab5-5
Input   1
        3
        10
Output  error
        error
        1234554321
By: Suphitsara Cheevanantaporn 61070230 */
#include <stdio.h>
int main(){
    int n1;
    scanf("%d", &n1);
    if (n1%2 !=0){
        printf("error");
        scanf("%d", &n1);
        if (n1%2 == 0){
            if (n1 < 2){
                printf("error");
                scanf("%d", &n1);
            }
            else {
                printf("%d", n1);
            }
        }
        else if (n1%2 !=0){
            printf("error");
            scanf("%d", &n1);
        }
    }
}