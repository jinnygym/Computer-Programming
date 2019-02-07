/*Q1-1 Question 7 [#117] By: Suphitsara Cheevanantaporn 61070230
d = a *= c / b + 5;
d = (a *= c) / b + 5; */
#include "stdio.h"
int main() {
    int a = 17, b = 25, c = 50, d = 10;
    d = a *= c / b + 5;
    d = (a *= c) / b + 5;
    // Assignment Statements of Each Question
    return 0;
}