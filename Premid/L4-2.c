/*Lab4-2 
Input   30.1 50.98 1  	
Output  30.10
By: Suphitsara Cheevanantaporn 61070230 */
#include <stdio.h>
int main(){
    double one, two, three;
    scanf("%lf %lf %lf", &one, &two, &three);
    if (one < two && one > three || one > two && one < three) {
        printf("%.2f", one);
    }
    else if(two < one && two > three || two > one && two < three){
        printf("%.2f", two);
    }
    else{
        printf("%.2f", three);
    }
}