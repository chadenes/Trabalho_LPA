#include <stdio.h>
int ordenar ( int *vetorzinho , int ); //prot�tipo da fun��o de ordena��o


main(){
	int t, i, d, D, p1, p2;
	printf("Entre com o tamanho do vetor desejado :");
	scanf("%d",&t);//pede o n�mero de elementos que o veotr ter� para o usu�rio
	int V[t];
	printf("Agora entre com os numeros que compoe esse vetor e \ndevolveremos o par com a menor diferenca entre eles \n");
	for(i=1; i<=t ; i++){
		printf("Elemento %d : \n", i);
		scanf("%d", &V[i]);
	}//pega elemento por elemento do vetor
	ordenar(V, t);//chama a fun��o que ordena o vetor
	p1 = V[1];//como o vetor j� est� oprdenado assume-se inicialmente que a menor diferen�a � entre o primeiro e o segundo elemento
	p2 = V[2];
	d =V[2] - V[1];//a menor diferen�a � tomada como sendo a diferen�a entre o elemento 1 e 2
	for(i=2;i<t;i++){
		D = V[i+1] - V[i];
		if(D < d){
			d = D;/*se a diferen�a entre dois elementos seguidos quaisquer for menor que a diferen�a
			entre o elemento 1 e 2 ela se torna a menor diferen�a e assim por diante*/
			p1 = V[i];
			p2 = V[i+1];
		}
	}
	printf("A menor diferenca eh %d e os elementos que fornecem essa diferenca sao %d e %d", d, p1, p2);
}



int ordenar (int vetorzinho[], int t){//essa � a fun��o de ordena��o conhecida como bubble sort
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

