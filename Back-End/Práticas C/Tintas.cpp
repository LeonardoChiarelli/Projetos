#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int quantidade;
	float tamanho, preco, litros;
	
	printf("Informe em metros quadrados o tamanho da �rea a ser pintada: ");
	scanf("%f", &tamanho);
	
	litros = tamanho / 3;
	quantidade = litros / 18;
	preco = (quantidade*80);
	
	printf("Voc� ir� precisar de %i latas para pintar a �rea", quantidade);
	printf("\nVoc� gastar� R$%.2f", preco);
	
	return 0;
}
