#include <stdlib.h>
#include <stdio.h>

struct plano2d{
	int x;
	int y;
};
typedef struct plano2d plano2d;

void imprimir ();
void opcao_verif_process(int*);

int main(int argc, char const *argv[]){
	int opcao;

		do{
			imprimir();
			opcao_verif_process(&opcao);
		}while(opcao != 0);

	return 0;
}

void imprimir (){
	puts("0-fechar programa");
	puts("1-criar_ponto");
	puts("2-listar");
	puts("3-alterar");
	puts("4-exluir_ponto");
};

void opcao_verif_process(int *opcao){
	scanf("%i", *opcao);
	printf("%i\n", *opcao);
}