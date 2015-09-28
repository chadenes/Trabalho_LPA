#include <stdio.h>
#include <stdlib.h>

/*prot�tipo das fun��es que respectivamente ordenam o vetor, 
selecionam o maior elemento do vetor e imprime os elementos que aprecem na maior frequ�ncia do vetor*/
int ordenar ( int *vetorzinho , int );
int seleciona (int *outro_vetorzinho, int);
int imprimir (int *mais_um_vetorzinho, int *mais_outro_vetorzinho, int, int);

main(){
	int t, i, j, d;
	printf("Entre com o tamanho do vetor desejado :");
	scanf("%d",&t);//pega um n�mero e associa ao tamanho do vetor
	int V[t];
	int Vaux[t];//criei um vetor auxiliar para armazenar as frequ�ncias que cada elemento aparece
	printf("Agora entre com os numeros que compoe esse vetor e \ndevolveremos os elementos que aparecem mais vezes \n");
	for(i=1; i<=t ; i++){//pega 1 por 1 os elementos do vetor
		printf("Elemento %d : \n", i);
		scanf("%d", &V[i]);
	}
	ordenar(V, t);//ordena o vetor principal
	for(i=1;i<=t;i++){/*la�o de repeti��o que define o elemento Vaux[i] do vetor auxiliar como sendo a 
	frequ�ncia em que o elemento V[i] aparece no vetor principal*/
		d = 0;
		for(j=1;j<=t;j++){
			if(V[i] == V[j]){
				d++;
			}
		}
		Vaux[i]=d;
	}
	i = seleciona(Vaux, t);// chama a fun��o que seleciona o maior elemento e faz i ser igual a ele
	printf("A maior frequencia obtida foi %d e os numeros que fornecem essa \nfrequencia sao : ", i );
	//imprime a maior frequ�ncia
	imprimir(Vaux, V, t, i);//chama a fun��o que imprime todos os elementos que ocorrem na maior frequ�ncia
	scanf("%d");
}

int ordenar (int vetorzinho[], int t){//fun��o do tipo bubble sort que ordena um vetor 
	int i, j, temp;
	int x = t;
	for(i=1; i<=x; i++){
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

int seleciona (int Vaux[], int taux){//fun��o que seleciona o maior elemento de um vetor e o retorna 
	int i;
	int d = 0;
	for(i=1;i<=taux;i++){
		if(Vaux[i]>d){
			d = Vaux[i];
		}
	}
	return d;
}

int imprimir (int Vaux[],int V[], int t, int maior){//fun��o que imprime todos os n�meros que ocorrem na maior frequ�ncia
	int i;
	for(i=1;i<=t;i++){
		if(Vaux[i] == maior && V[i]!=V[i-1]){
			printf("%d, ", V[i]);
		}
	}
	return 0;
}









