/*Lab 2-8 
By: Suphitsara Cheevanantaporn
61070230*/
#include <stdio.h>
int main()
{
    char first[30], last[30];
    int sid, day, month, year;
    float gpa;
    scanf("%s %s", first, last);
    scanf("%d", &sid);
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\n", first, last);
    printf("ID: %d\n", sid);
    printf("DOB: %02d-%02d-%04d\n", day, month, year);
    printf("GPA: %.2f", gpa);
    return 0;
}