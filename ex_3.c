#include<stdio.h>
	
	calcula(int base, int expoente){
		if(expoente>1)
			return base * calcula(base, (expoente-1));
		else
			return base;
}

	int main(){
		int base, expoente;
		printf("Digite a base: ");
		scanf("%i",&base);
		printf("Digite o expoente: ");
		scanf("%i",&expoente);
	printf("Resultado: %i",calcula(base, expoente));

return 0;
}