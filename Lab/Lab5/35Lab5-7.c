/*Lab5-7
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
int main()
{
    int count, ans=0;
    while(1){
        scanf("%d", &count);
        if(count == -9){
            break;
        }
        ans = ans+count;
    }
    printf("%d", ans);
    return 0;
}