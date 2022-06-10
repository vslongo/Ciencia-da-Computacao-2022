#include <stdio.h>
#define TAM 5

void carregaMatriz(int ma[][TAM]){
	int i, c;
	for(i=0; i<TAM; i++){
		for(c=0; c<TAM; c++){
			printf("Informe o valor para ma[%i][%i]: ", i, c);
			scanf("%i", &ma[i][c]);
		}
	}
	
}
void escreveMatriz(int ma[][TAM]){
	int i, c;
	for(i=0; i<TAM; i++){
		for(c=0; c<TAM; c++){
			printf("%i\t", ma[i][c]);
			
		}
		printf("\n");
	}
}







int main(){
	int ma[TAM][TAM];
	carregaMatriz(ma);
	escreveMatriz(ma);
}
