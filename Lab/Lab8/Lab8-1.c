/*Lab8-1  
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <string.h>
int main()
{
    struct student_info
    {
        char name[20];
        char surname[30];
        char sex[7];
        int age;
        char id[10];
        float gpa;
    } std; 
    scanf("%s %s %s %d %s %f", std.name, std.surname, std.sex, &std.age, std.id, &std.gpa);
    if (strcmp(std.sex, "Male") == 0){ //เท่ากันเป็น 0
        printf("Mr %c %s (%d) ID: %s GPA %.2f", std.name[0], std.surname, std.age, std.id, std.gpa);
        //Mr A Vejjajiva (21) ID: 59070001 GPA 2.00
    }
    else {
        printf("Miss %c %s (%d) ID: %s GPA %.2f", std.name[0], std.surname, std.age, std.id, std.gpa);
        //Miss Y Shinnawatra (20) ID: 59070002 GPA 4.00
    }
 
    return 0;
}