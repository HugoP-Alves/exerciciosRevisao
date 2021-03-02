#include<stdio.h>
#include<stdlib.h>

	typedef struct{
		char nome[40];
		char tipo[40];
		int integrantes;
		int posicao;
	}banda;

	void preencher(banda bandas[]){
		for(int i = 0; i<5; i++){
			setbuf(stdin,NULL);
			printf("Digite o nome: ");
			fgets(bandas[i].nome, 40, stdin);
			setbuf(stdin,NULL);

			printf("Digite o tipo: ");
			fgets(bandas[i].tipo, 40, stdin);

			printf("Digite a quantidade de integrantes: ");
			scanf("%i",&bandas[i].integrantes);

			printf("Digite a posição: ");
			scanf("%i",&bandas[i].posicao);	
		}
	}
	void pesquisa_posicao(banda bandas[], int posicao){
		posicao--;
		printf("%s",bandas[posicao].nome);
		printf("%s",bandas[posicao].tipo);
		printf("\n%i",bandas[posicao].integrantes);
		printf("\n%i",bandas[posicao].posicao);
	}

	int main(){
		banda bandas[5];
		int posicao;
	preencher(bandas);
	
	for(int i = 0; i<5; i++){
		printf("%s",bandas[i].nome);
		printf("%s",bandas[i].tipo);
		printf("\n%i",bandas[i].integrantes);
		printf("\n%i",bandas[i].posicao);
	}

	printf("Digite a posição da banda que deseja procurar: ");
	scanf("%i",&posicao);

	pesquisa_posicao(bandas, posicao);


	return 0;
	}
	