#include <stdio.h>
#define N 12
void carregaVetor(int vet[]){
int i;
for(i=0; i <N; i++){
	printf("Informe o valor para vet[%i]: ", i);
	scanf("%i", &vet[i]);
}
	
}
	
void escreveVetor(int vet[]){
	int i;
	for(i=0; i<N; i++){
		printf("%i,", vet[i]);
	}
		
}

int somaElementosIndicePar(int vet[]){
	int i, soma=0;
	for(i=0; i<N; i++){
		if(i%2 == 0){
			soma = soma+ vet[i];	
		}
	}
	return soma;
}
void escreveSoma(int soma){
	printf("\n\n A soma dos indices pares eh %i \n", soma);
}

int main(){
	int vet[N], soma;
	carregaVetor(vet);
	escreveVetor(vet);
	soma = somaElementosIndicePar(vet);
	escreveSoma(soma);
}


