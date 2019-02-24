/*Homework6-1
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
   int num, count = 0;
   scanf("%d",& num);
   char a[num][2], alp;
   for(int i = 0; i < num; i++){
       a[i][1] = 0;
       a[i][0] = 0;
   }
   for(int i = 0; i < num; i++){
        scanf(" %c",&alp);
        alp = tolower(alp);
        int check = 1;
        for(int j = 0; j < num; j++){
            if (alp == a[j][0]){
                a[j][1]++;
                check = 0;
                break;
            }
        }
        if (check){
            a[count][0] = alp;
            a[count][1] = 1;
            count++;
        }
    }
    for(int i = 0; i < num; i++){
       if(a[i][1] != 0) printf("%c: %d\n", a[i][0], a[i][1]);
   }
}