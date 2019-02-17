/*Homework5-4
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
#include <stdlib.h>
int main()
{
    int num;
    scanf("%d", &num);
    for(int col = 0; col < num; col++){
        for(int row = -(num-1); row <= num-1; row++){
            if (col >= abs(row)){
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}