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
{	printf ("Insira o c�digo do servi�o: \n");
	scanf ("%d",&(*a).codigo);
	printf ("Insira o nome do servi�o: \n");
	fflush (stdin);
	scanf ("%s",&(*a).nome);
	printf ("Insira o tipo de servi�o, sendo este at� 9: \n");
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
        printf("5-Ocupar servico por c�digo\n");
        printf("6-Ocupar primeiro servico livre\n");
        printf("7-Libertar servico por c�digo\n");
        printf("8-Estat�sticas\n");
        printf("0-Sair\n");
        
        //Ler op��o
        printf("Escolha a op��o ");
        scanf("%d", &opcao);
        
        
        switch (opcao){
        	case 1:
        		
		}
	
}
