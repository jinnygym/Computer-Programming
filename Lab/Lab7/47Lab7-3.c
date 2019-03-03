/* Lab7-3
By: Suphitsara Cheevanantaporn 61070230*/
#include "stdio.h"
#include "math.h"
 
double Pythagoras(double a, double b);
double perimeter(double x, double y, double z);
double area0(double i, double j);
 
int main(){
    double a, b, c, p, t;
    scanf("%lf %lf", &a, &b);
    c = Pythagoras(a, b);
    p = perimeter(a, b, c);
    t = area0(a, b);
    printf("Perimeter: %.2f\n", p);
    printf("Area: %.2f\n", t);
    return 0;
}
 
double Pythagoras(double a, double b){ //c
    return sqrt(pow(a, 2)+pow(b, 2));
}
 
double perimeter(double x, double y, double z){
    return x+y+z;
}
 
double area0(double a, double b){
    double area2 = (0.5 * a )* b;
    return area2;
}