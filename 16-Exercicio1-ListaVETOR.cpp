#include <stdio.h>

int main(){
	int vet[10],i,n,contPar=0;
	float somaPar=0;
	printf("Qtde de valores no vetor:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Vetor[%d]:",i);
		scanf("%d",&vet[i]);
	}//fim for
	for(i=0;i<n;i++){
		printf("%d | ",vet[i]);
		if(vet[i]%2==0){
			contPar++;
			somaPar+=vet[i];
		}//fim if
		
	}//fim for
	printf("\nQuantidade de pares:%d",contPar);
	printf("\nSoma dos pares:%.2f",somaPar);
	printf("\nMedia dos pares:%.2f",somaPar/contPar);
	return 0;
}
