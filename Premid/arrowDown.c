#include <stdio.h>
/*5 //num
    *
    *
*   *   *
 *  *  *
  * * *
   ***
    *
*/
int main() {
    /* Main function */
    int num;
    scanf("%i", &num);

    // Arrow Tail
    for (int i = 0; i < 2; i++) { //0-1 จะให้ลูกศรออกมากี่บรรทัด
        for (int j = 0; j < num-1; j++) { //ช่องว่าง 0-8
            putchar(' ');
        }
        printf("*\n");
    }

    int space_in = num - 2, space_out = 0; //ไม่รวม Tail
    // Arrow Head
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < space_out; j++) //space_out = 0
            putchar(' ');
            if (i < num - 1)
                putchar('*');
        //space_in--; Start 0 : space_in = num - 2
        for (int j = 0; j < space_in; j++)
            putchar(' ');
            if (i < num - 1)
                putchar('*');
        for (int j = 0; j < space_in; j++)
            putchar(' ');
        printf("*\n");
        space_in--;
        space_out++;
    }

    return 0;
}