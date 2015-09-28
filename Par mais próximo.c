#include <stdio.h>
int ordenar ( int *vetorzinho , int ); //protótipo da função de ordenação


main(){
	int t, i, d, D, p1, p2;
	printf("Entre com o tamanho do vetor desejado :");
	scanf("%d",&t);//pede o número de elementos que o veotr terá para o usuário
	int V[t];
	printf("Agora entre com os numeros que compoe esse vetor e \ndevolveremos o par com a menor diferenca entre eles \n");
	for(i=1; i<=t ; i++){
		printf("Elemento %d : \n", i);
		scanf("%d", &V[i]);
	}//pega elemento por elemento do vetor
	ordenar(V, t);//chama a função que ordena o vetor
	p1 = V[1];//como o vetor já está oprdenado assume-se inicialmente que a menor diferença é entre o primeiro e o segundo elemento
	p2 = V[2];
	d =V[2] - V[1];//a menor diferença é tomada como sendo a diferença entre o elemento 1 e 2
	for(i=2;i<t;i++){
		D = V[i+1] - V[i];
		if(D < d){
			d = D;/*se a diferença entre dois elementos seguidos quaisquer for menor que a diferença
			entre o elemento 1 e 2 ela se torna a menor diferença e assim por diante*/
			p1 = V[i];
			p2 = V[i+1];
		}
	}
	printf("A menor diferenca eh %d e os elementos que fornecem essa diferenca sao %d e %d", d, p1, p2);
}



int ordenar (int vetorzinho[], int t){//essa é a função de ordenação conhecida como bubble sort
	int i, j, temp;
	int x = t;
	for(i=0; i<x; i++){
		for(j=1; j<x; j++){
			if(vetorzinho[j] > vetorzinho[j+1]){
				temp = vetorzinho[j+1];
				vetorzinho[j+1] = vetorzinho [j];
				vetorzinho[j] = temp;
			}
			
		}
	}
	return 0;
}

