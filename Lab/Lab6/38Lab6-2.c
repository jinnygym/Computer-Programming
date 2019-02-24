/*Lab6-2 Mutiple Matrix A x B
By: Suphitsara Cheevanantaporn 61070230*/
#include<stdio.h>
int main(){
	double A[3][3],B[3][3],C[3][3];
	for(int i = 0;i<3;i++){ // Row 0-2
		for(int j = 0 ; j<3;j++){ // Column 0-2
			scanf("%lf",&A[i][j]); //Matrix A[3][3]
		}
	}
	for(int i = 0;i<3;i++){ // Row 0-2
		for(int j = 0 ; j<3;j++){ // Column 0-2
			scanf("%lf",&B[i][j]);//Matrix B[3][3]
		}
	}
	for(int i = 0 ;i<3;i++){ // Row 0-2
		for(int j =0;j<3;j++){ // Column 0-2
		C[i][j]= A[i][0]*B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j] ;//Mutiple Matrix A x B
		}
	}
	printf("A x B\n");
	for(int i = 0 ;i<3;i++){
		for(int j = 0 ;j<3 ;j++){
			printf("%.2lf ",C[i][j]);// Ans //Mutiple Matrix A x B
		}
		printf("\n");
	}
}
