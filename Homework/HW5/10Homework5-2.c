/*Homework5-2
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
#include <stdlib.h>
int main()
{
    int num;
    scanf("%d", &num);
    for(int col = -(num-1)/2;col <= (num-1)/2;col++){ //Loop แนวตั้ง(col)
        for(int row = -(num-1)/2;row <= (num-1)/2;row++){//Loop แนวนอน(row)
            if(abs(row)==abs(col)){
                printf("-");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
main()
