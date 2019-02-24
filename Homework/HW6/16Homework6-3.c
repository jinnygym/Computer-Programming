/*Homework6-3
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
#include <string.h>
int main(){
    char text[100], text2[100];
    int count=0;
    scanf(" %[^\n]", text);
    int ans = strlen(text);
    for(int i = ans - 1; i >= 0 ; i--){
        text2[count] = text[i]; //Reverse Word
        count++;
    }
    for(int j = 0 ; j < ans ; j++){ //checking
        if(text[j] != text2[j]){
            printf("It is not Palindrome.");
            return 0;
        }
    }
    printf("It is Palindrome.");
    printf("\n");
    
}