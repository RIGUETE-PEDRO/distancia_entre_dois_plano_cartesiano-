#include <stdio.h>
#include <stdlib.h>

struct pontos2d
{
	int x;
	int y;
};

typedef struct pontos2d t_ponto2d;

struct controle_pontos2D
{
	t_pontos2d* pontos2d;
	int quantidade;
};

typedef struct controle_pontos2D t_controle_pontos;

void imprimir();
void obter_opcao(int*);
void processar_e_direcionar_funcionalidade_opcao(t_plano_2D*,int);

int main(int argc, char** argv[])
{
	t_controle_pontos controle_pontos2D;
	int *opcao;
	do{
		imprimir();
		obter_opcao(&opcao);
		processar_e_direcionar_funcionalidade_opcao(t_controle_pontos,opcao);
	}while(opcao != 0);
	return 0;
}

void imprimir(){
	puts("0 - sair do programa ");
	puts("1 - cadastrar ponto 2D");
	puts("2 - listar pontos 2D");
	puts("3 - excluir ponto 2D");
	puts("4 - alterar ponto 2D");
	puts("digite sua opcao:");
}

void obter_opcao(int *opcao){
scanf("%i", opcao);

}

void processar_e_direcionar_funcionalidade_opcao(t_controle_pontos controle_pontos2D,int opcao){
   switch(opcao){
    case 0 :
      printf("saindo do programa");
      break;
    case 1 : 
      cadastrar();
      break;
    case 2 :
      listar_opcao();
      break;
    case 3 :
      excluir_opcao();
      break;
    case 4 :
      alterar_opcao();
      break;
    default:
      printf("voce digitou uma opcao invalida\n");
  };
}

cadastrar();

listar_opcao();

excluir_opcao();

alterar_opcao();