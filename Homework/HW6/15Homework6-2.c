/*Homework6-2
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
#include <string.h>
int main(){
    int start;
    char fighter[20];
    scanf("%d %s", &start, fighter);
    int p0 = start;
    int p1 = start;
    int ans = strlen(fighter);
    for(int i = 0; i < ans; i++){
        if(fighter[i]%2 == 0){// เลขคู่
            p1--;
            if(fighter[i] == fighter[i+1] && fighter[i] == fighter[i+2]){
                p1 = p1 - 3;
            }
        }
        else if(fighter[i]%2 != 0){// เลขคี่
            p0--;
            if(fighter[i] == fighter[i+1] && fighter[i] == fighter[i+2]){
                p0 = p0 - 3;
            }
        }
    }
    if(p0 > p1) printf("0 %d %d", p0, p1);
    else if(p0 < p1) printf("1 %d %d", p0, p1);
    else printf("- %d %d", p0, p1);
}