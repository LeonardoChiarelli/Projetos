#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double A, B, C;
	
	printf("Informe o valor de A (>0): ");
	scanf("%lf", &A);
	printf("\nInforme o valor de B (>0): ");
	scanf("%lf", &B);
	printf("\nInforme o valor de C (>0): ");
	scanf("%lf", &C);
	
	if(A>=B+C){
		printf("OS DADOS N�O FORMAM UM TRI�NGULO");}
	else if (A*A == B*B + C*C){
		printf("TRI�NGULO RET�NGULO");}
	else if (A*A > B*B + C*C){
		printf("TRI�NGULO OBTUS�NGULO");}
	else if(A*A < B*B + C*C){
		printf("TRI�NGULO ACUT�NGULO");}
	else if(A=B=C){
		printf("TRI�NGULO EQUILATERO");}
	else{
		printf("TRI�NGULO IS�CELES");
	}
	
	return 0;
}
