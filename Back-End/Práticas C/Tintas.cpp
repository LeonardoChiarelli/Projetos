#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int quantidade;
	float tamanho, preco, litros;
	
	printf("Informe em metros quadrados o tamanho da área a ser pintada: ");
	scanf("%f", &tamanho);
	
	litros = tamanho / 3;
	quantidade = litros / 18;
	preco = (quantidade*80);
	
	printf("Você irá precisar de %i latas para pintar a área", quantidade);
	printf("\nVocê gastará R$%.2f", preco);
	
	return 0;
}
