#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 10


typedef struct
{
	int codigo;
	char nome [50];
	int tipo [1];
	char estado [15];
} SERVICO;


void insere_servico (SERVICO *a)
{	printf ("Insira o código do serviço: \n");
	scanf ("%d",&(*a).codigo);
	printf ("Insira o nome do serviço: \n");
	fflush (stdin);
	scanf ("%s",&(*a).nome);
	printf ("Insira o tipo de serviço, sendo este até 9: \n");
	scanf ("%d", &(*a).tipo);
}












main ()
{		setlocale(LC_ALL,"Portuguese");
		int opcao;
 
 do{
        //Mostrar menu

        printf("1-Inserir\n");
        printf("2-Listar\n");
        printf("3-Alterar\n");
        printf("5-Ocupar servico por código\n");
        printf("6-Ocupar primeiro servico livre\n");
        printf("7-Libertar servico por código\n");
        printf("8-Estatísticas\n");
        printf("0-Sair\n");
        
        //Ler opção
        printf("Escolha a opção ");
        scanf("%d", &opcao);
        
        
        switch (opcao){
        	case 1:
        		
		}
	
}
