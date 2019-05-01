/*Lab8-2 
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include<stdlib.h>
struct student{ //Student data
        char name[60];
        char surname[60];
        char sex[7];
        int age;
        char id[12];
        float gpa;
    }std;
int main(){
    char check[8];
    struct Student.std[20];
    for(int i = 0; i < 20; i++) //0-19
    scanf("%s %s %s %d %s %f", std.name, std.surname, std.sex, &std.age, std.id, &std.gpa);
            if (strcmp(check, "Name") == 0) {
                
            }
            else if (strcmp(check, "Surname") == 0) {
                
            }
            else if (strcmp(check, "Id") == 0 ) {
            }

    //OUTPUT
    for(int i = 0; i < 20; i++){ //0-19
        if (strcmp(std.sex, "Male") == 0){ //เท่ากันเป็น 0
        printf("Mr %c %s (%d) ID: %s GPA %.2f", std.name[0], std.surname, std.age, std.id, std.gpa);
        }
        else if (strcmp(std.sex, "Female ") == 0){ //เท่ากันเป็น 0
        printf("Miss %c %s (%d) ID: %s GPA %.2f", std.name[0], std.surname, std.age, std.id, std.gpa);
        }
    }
}