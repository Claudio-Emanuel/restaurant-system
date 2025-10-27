#include <stdio.h>
#include <stdlib.h>

//declarar as fun��es
//===================================
void Menu();
void Pedido();
void exiPedido();
void delPedido();
void sair();
int cont=0;
//===================================

//Criando a estrutura para armazenar as informa��es
//===================================
struct Opcoes{
		int i;
		int q;
		int m;
		char obs[100];
}Opcoes;
struct Opcoes op['cont'];
//===================================

//Menu para Anotar,Exibir,Deletar o pedido ou encerrar o programa
//========================================================================
void Menu(){
	printf("Quantidade de Pedidos %d",cont);
	printf("================Hamburgueria da Ada=====================================================\n");
	printf("1=>Anotar Pedido\n");
	printf("2=>Exibir Pedido(s)\n");
	printf("3=>Deletar Pedido(s)\n");
	printf("0=>Encerrar Pedido \n");
	printf("====================================================================================================\n");
	printf("Digite:");
//=========================================================================

//Switchs para os casos do Menu
//=========================================
	int escolher;
	scanf("%d",&escolher);
	switch(escolher){
		case 1:
			Pedido();
			Menu();
			break;
		
		case 2:
			exiPedido();
			Menu();
			break;
		case 3:
			delPedido();
			Menu();
			break;
		case 0:
			sair();
			break;
		
		default:
			printf("Opcao Invalida!\n");	
			printf("\n");
			Menu();
			break;
	}
}
//===========================================

//Fun��o para armazenar as inform��es do pedido como c�digo,mesa,quantidade,item do cat�logo ou observa��o
//====================================================================
void Pedido(){
		printf("Codigo do pedido:%d\n",cont++);
		printf("Digite o item do Pedido:");
		scanf("%d",&op[cont].i);
		printf("Digite a Quantidade:");
		scanf("%d",&op[cont].q);
		printf("Digite o numero da mesa:");
		scanf("%d",&op[cont].m);
		printf("Digite se houver alguma coisa que queira retirar:");
		scanf("%s",&op[cont].obs);
		printf("\n");
	}
//====================================================================

//Exececutar o Menu
//===================================
int main(){	
	Menu();
	return 0;
}
//===================================

//Fun��es restantes (exibir,deletar e sair do programa)
//=====================================================================
void exiPedido(){
	printf("=====================PEDIDOS========================\n");
	for(int i=1;i<=cont;i++){
		printf("Codigo do pedido:%i�\n",i);
		printf("Item: %d\n", op[i].i);
      	printf("Quantidade: %d\n", op[i].q);
      	printf("Mesa: %d\n", op[i].m);
     	 printf("Observa��o: %s\n", op[i].obs);
    printf("=====================================================");
    printf("\n");
	}	
}


void delPedido(){
	int r=0;
	printf("Digite o Codigo do pedido que deseja retirar:");
	scanf("%d",&r);
	while(r<cont){
		op[r]=op[r+1];
		r++;
	}
	cont--;
	
}


void sair(){
	printf("Fim do programa");
}
//======================================================================
