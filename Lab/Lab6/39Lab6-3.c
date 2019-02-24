/*Lab6-3 Mutiple Matrix 3 x 3
By: Suphitsara Cheevanantaporn 61070230*/
#include<stdio.h>
int main(){
    double matrix[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%lf", &matrix[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j && (matrix[i][j] != matrix[0][0])){
                printf("This is not a scalar matrix");
                return 0;
            }
            else if(i != j && (matrix[i][j] != 0)){
                printf("This is not a scalar matrix");
                return 0;
            }
        }
    }
    printf("This is a scalar matrix");
}
