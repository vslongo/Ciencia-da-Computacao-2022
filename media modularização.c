#include <stdio.h>


float calcMedia(float nota1,float nota2,float nota3,float nota4){
	
	float media = ((nota1 + nota2 + nota3 + nota4)/4);
	
	return media;
	
}

void aprov( float media){
	printf("%f",media);
	if (media >= 7){	
		printf("vc foi aprovado, kkkk, boa mlk\n\n");
	}else{
		printf("burro, reprovou\n\n");
	}
	
	
}

int main(){
	
	int i;
	float nota1, nota2, nota3, nota4, media;
	
	for(i=0; i<50; i++){
		printf("qual a sua primeira nota?\n");
		scanf("%f", &nota1);
		printf("qual a sua primeira nota?\n");
		scanf("%f", &nota2);
		printf("qual a sua primeira nota?\n");
		scanf("%f", &nota3);
		printf("qual a sua primeira nota?\n");
		scanf("%f", &nota4);
		
		media = calcMedia(nota1,nota2,nota3,nota4);
		aprov(media);
	}
	
	
}
