#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome;
	double salario_fixo, vendas, x;
	
	printf("Nome: ");
	scanf("%s", &nome);
	printf("\nSalário: ");
	scanf("%d", &salario_fixo);
	printf("\nVendas: ");
	scanf("%d", &vendas);
	
	x = salario_fixo + (0.15*vendas);
	
	printf("TOTAL = R$%d", x);
	
	return 0;
}
