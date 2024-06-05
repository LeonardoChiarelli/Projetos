#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, senha;
	
	scanf("%d", &senha);
	
	for(i=0; senha!=2002; i++){
		if(senha!=2002){
			printf("Acesso Negado!\n");
			scanf("%d", &senha);
		}
	}
	printf("Acesso Permitido!");
	
	return 0;
}
