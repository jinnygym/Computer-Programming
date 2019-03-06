/*Lab6-5 [Find character in message EZ]
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
#include <string.h>
#include <ctype.h>
int main(){
    char text[300], word; // Check Sentence in input == word
    int count = 0;
    scanf(" %[^\n] %c", text, &word);
    int ans = strlen(text);
    for(int i = 0; i < ans; i++)
    {
        if (tolower(text[i]) == word) {
            count++;
        }
    }

    if(count == 0) {
        printf("Not found.");
    }
    else {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, word);
        char pos[count]; //New!!
        int pos2 = 0; 
        for(int j = 0; j < pos[count]; j++)
        {
            if (text[j] == word) {
                pos[pos2] = j+1;
                pos2++;
            }
        }
        printf("Position: ");
        for(int k = 0; k < strlen(pos); k++)
        {
            if(pos[k] >= strlen(text) || (int) pos[k+1] < pos[k]){
                printf("%d ", pos[k]);
                return 0;
            }
            else
            {
                printf("%d ", pos[k]);
            }
        }
    }
    return 0;
}