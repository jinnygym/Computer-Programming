/*Lab4-3 
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h> 
#include <ctype.h>
int main () {
   char grade;
   scanf("%c", &grade);
   grade = toupper(grade);
   switch(grade) {
      case 'A' :
         printf("Genius"); break;
      case 'B' :
         printf("Good"); break;
      case 'C' :
         printf("Try Harder"); break;
      case 'D' :
         printf("Very Bad"); break;
      case 'F' :
         printf("Fail"); break;
      default :
         printf("Invalid Input"); break;
   }
   return 0;
}