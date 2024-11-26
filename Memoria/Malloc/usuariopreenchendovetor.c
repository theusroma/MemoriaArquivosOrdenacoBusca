#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	
	int *vetor = (int *)malloc(n * sizeof(int));
		if(vetor == NULL){
			printf("Erro ao alocar o vetor!");
			return 1;
		}
	
	for(i=0; i<n; i++){
		printf("Digite um numero para o indice [%d]", i);
		scanf("%d", &vetor[i]);
	}
	
	for(i=n -1; i>=0; i--){
		printf("%d ", vetor[i]);
	}
	
	free(vetor);
	
	return 0;
}
