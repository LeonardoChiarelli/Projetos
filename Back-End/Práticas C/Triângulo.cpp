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
		printf("OS DADOS NÃO FORMAM UM TRIÂNGULO");}
	else if (A*A == B*B + C*C){
		printf("TRIÂNGULO RETÂNGULO");}
	else if (A*A > B*B + C*C){
		printf("TRIÂNGULO OBTUSÂNGULO");}
	else if(A*A < B*B + C*C){
		printf("TRIÂNGULO ACUTÂNGULO");}
	else if(A=B=C){
		printf("TRIÂNGULO EQUILATERO");}
	else{
		printf("TRIÂNGULO ISÓCELES");
	}
	
	return 0;
}
