//Pedra ganha da tesoura (amassando-a ou quebrando-a).
//Tesoura ganha do papel (cortando-o).
//Papel ganha da pedra (embrulhando-a).
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //para usar variável booleano bool
#include <time.h> // bibloteca para utilizar srand(time(NULL))
//declaração dos subprogramas - protótipo dos subprogramas
void menu(void);
void resultado_do_jogo(int j, int comp);
int main(){

	int computador,jogador;
	bool continua = 1;
	char opcao;
	srand(time(NULL)); //semente para gerar um número aleatório em cada jogo
	
	while (continua)
	{	
	        menu();//chamando subprograma menu()
		
		printf("Sua jogada: ");
		scanf("%d",&jogador);
		fflush(stdin);  //limpar buffer do comando scanf(...)
		computador = 1 + ( rand() % 3 ); //gerar um número aleatório entre 1 a 3
		printf("O computador jogou: %d\n",computador);
		
		//chamada subprograma resultado_do_jogo(int j, int comp)
		resultado_do_jogo(jogador,computador);
		
		printf("Gostaria continuar jogando (s/n)? ");
		scanf("%c",&opcao);
		if (opcao != 's' && opcao != toupper('s'))
		      continua = 0;
        }       
	printf("Fim do jogo!!!\n");
	return 0;
}


// subprgramas como procediemento
void menu(void)
{
	printf("\n***Bem vindo ao Pedra-papel-tesoura***\n");
	printf("Voce jogara contra o computador.....");
	printf("Escolha sua jogada: \n");
	printf("1 - Tesoura\n");
	printf("2 - Papel\n");
	printf("3 - Pedra\n");	
}
void resultado_do_jogo(int j, int comp)	
{
	if(j < 1 || j > 3){
		printf("Jogada invalida!!\n");
	}
	else{
			if(j == comp){
				printf("Empate!!\n");
			}
			else{
				if(j == 1 && comp == 2){
					printf("Voce venceu!\n");
				}
				if(j == 1 && comp == 3){
					printf("Voce perdeu!!!\n");
				}
				if(j == 2 && comp == 1){
					printf("Voce perdeu!!\n");
				}
				if(j == 2 && comp == 3){
					printf("Voce ganhou!!!\n");
				}
				if(j == 3 && comp == 2){
					printf("Voce perdeu!!\n");
				}
				if(j == 3 && comp == 1){
					printf("Voce ganhou!!!\n");
				}		
			}
		}	
}	
