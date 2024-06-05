#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int salario, ir, inss, sindicato, salario_liquido;
	
	printf("Digite seu salário: ");
	scanf("%d", &salario);
	
	ir = salario*0.11;
	inss = salario*0.08;
	sindicato = salario*0.05;
	salario_liquido = salario-(ir+inss+sindicato);
	
	printf("+ Salário bruto: R$%i", salario);
	printf("\n- IR (11%%): R$%i", ir);
	printf("\n- INSS (8%%): R$%i", inss);
	printf("\n- Sindicato (5%%): R$%i", sindicato);
	printf("\n= Salário líquido: R$%i", salario_liquido);
	
	return 0;
}
