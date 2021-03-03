#include <stdio.h>
#include <stdlib.h>

void main()
{
  FILE *arquivo, *arquivo_2;
  char Linha[100];
  int i, contador = 0;

  arquivo = fopen("Arq_1.txt", "rt");
  arquivo_2 = fopen("Arq_2.txt", "w");

  if (arquivo == NULL || arquivo_2 == NULL){ 
     printf("Problemas na abertura do arquivo\n");
     return;
  }

  while (!feof(arquivo)){

      fgets(Linha, 100, arquivo);  
      	for(i = 0; i < strlen(Linha); i++){ 
		
			if(Linha[i] == 'A' || Linha[i] == 'a' ||
				Linha[i] == 'E' || Linha[i] == 'e' ||
				Linha[i] == 'I' || Linha[i] == 'i' ||
				Linha[i] == 'O' || Linha[i] == 'o' ||
				Linha[i] == 'U' || Linha[i] == 'u'){
				
				Linha[i] = '*';
			}
		}
	
	if (Linha)  // Se foi possível ler
	  fprintf(arquivo_2,"%s",Linha);
      i++;
	  contador++;
  }
  printf("Número de linhas: %i", contador);
  fclose(arquivo);
}