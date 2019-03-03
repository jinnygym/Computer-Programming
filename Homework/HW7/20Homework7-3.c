/* Homework7-3
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <string.h>
int main(){
    char box[30];
    char one;
    scanf("%c %s", &one, box);
    int ans = strlen(box);
    for(int i=0; i < ans; i++){
        if(one == 'L'){
            if(box[i] == 'A'){
                one = 'C';
            }
            else if(box[i] == 'C'){
                one = 'R';
            }
        }
        else if(one == 'C'){
            if(box[i] == 'A'){
                one = 'L';
            }
            else if(box[i] == 'B'){
                one = 'R';
            }
        }
        else if(one == 'R'){
            if(box[i] == 'B'){
                one = 'C';
            }
            else if(box[i] == 'C'){
                one = 'L';
            }
        }
    }
    printf("%c", one);
    return 0;
}