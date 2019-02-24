/*Lab6-4 [Reverse Word EZ]
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
#include <string.h>
int main(){
    //I want F on Computer programming
    //gnimmargorp retupmoC no F tnaw I
    char text[100];
    scanf(" %[^\n]", text);
    int ans = strlen(text);
    for(int i = ans - 1; i >= 0 ; i--){
        printf("%c", text[i]);
    }
    printf("\n");
}