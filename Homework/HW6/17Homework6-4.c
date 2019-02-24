/*Homework6-4
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <string.h>
int main(){
    int start = 0, count = 0;
    int len2 = -1, pos = 0;
    char wd[100];
    scanf("%[^\n]s", wd);
    wd[strlen(wd)] = ' ';
    for(int a = 0; a < strlen(wd); a++)
    {
        if(wd[a] == ' '){
            if(count > len2){
                start = pos;
                len2 = count;
            }
            pos = a+1;
            count = 0;
        }
        else count++;
    }
    for(int a = 0; a < len2; a++)
    {
        printf("%c", wd[start+a]);
    }
    return 0;
}