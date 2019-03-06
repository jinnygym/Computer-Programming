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
    int n1, half;
    while(1){
        scanf("%d", &n1);
        if (n1%2 != 0){
            printf("error\n");
        }
        else if (n1%2 == 0 && n1 < 2){
            printf("error\n");
            
        }
        else if (n1%2 == 0 && n1 >= 2){
            for(int i = 0; i < n1/2; i++)
            {
                printf("%d", i+1);
            }
            for(int i = n1/2; i > 0; i--)
            {
                printf("%d", i);
            }
            break;
        }
    }
    return 0;
}