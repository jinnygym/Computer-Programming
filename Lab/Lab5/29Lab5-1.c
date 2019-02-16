/*Lab5-1 : 1 to n
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
int main()
{
    int num;
    scanf("%d", &num);
    int i = 0;
    while(i<num){
        i++;
        printf("%d ", i);
    }
    return 0;
}