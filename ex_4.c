#include<stdio.h>
#include<stdlib.h>

	void ler_numeros(int* vetor, int n){
		for(int i=0;i<n;i++){	
				printf("Informe	o número do vetor[%d]:",i);	
				scanf("%d", &vetor[i]);	
		}
	}

	int main(){	
		int *vetor, n, soma=0;	
				
		printf("Informe	o tamanho do vetor: ");	
		scanf("%d", &n);	
						
		vetor = malloc(n*sizeof(int));

		ler_numeros(vetor, n);

		for(int i=0;i<n;i++){	
			printf("\nVetor[%d]: %d", i, vetor[i]);
		}

		free(vetor);

	return 0;
}