#include<stdio.h>

	void converte(int totalminutos, int* minutos, int* horas){
		*horas=totalminutos/60;
		*minutos=totalminutos%60;
		}

	int main(){
		int totalminutos, minutos, horas;
			printf("Digite a quantidade total de minutos: ");
			scanf("%i",&totalminutos);
		
	converte(totalminutos, &minutos, &horas);
	
	printf("Horas: %i",horas);
	printf("\nMinutos: %i",minutos);

	return 0;
	}