#include <stdio.h>

int ordenar ( int *vetorzinho , int );//protótipo da função que ordena o vetor

main(){
	int t, i, d;
	printf("Entre com o tamanho do vetor desejado :");//pega o número de elementos que o vetor terá
	scanf("%d",&t);
	int V[t];
	printf("Agora entre com os numeros que compoe esse vetor e \ndevolveremos os elementos que aparecem apenas uma vez \n");
	for(i=1; i<=t ; i++){//pega 1 por 1 os elementos do vetor
		printf("Elemento %d : \n", i);
		scanf("%d", &V[i]);
	}
	ordenar(V, t);//chama a função que ordena o vetor de elementos digitados
	printf("Os elementos que aparecem uma unica vez sao: ");
	for(i=1;i<=t; i++){
		if(V[i+1]-V[i] != 0 && V[i]!= d){/*testa e imprime os elementos únicos, observe que "d" tem
		o valor do elemento anterior ao que está sendo testado*/
			printf("%d, ", V[i]);
		}else{
			d = V[i];
		}
	}
}





int ordenar (int vetorzinho[], int t){//função que ordena vetores conhecida como bubble sort
	int i, j, temp;
	int x = t;
	for(i=0; i<x; i++){
		for(j=1; j<=x; j++){
			if(vetorzinho[j] > vetorzinho[j+1]){
				temp = vetorzinho[j+1];
				vetorzinho[j+1] = vetorzinho [j];
				vetorzinho[j] = temp;
			}
			
		}
	}
	return 0;
}

