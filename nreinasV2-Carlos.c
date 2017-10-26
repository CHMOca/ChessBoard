#include<stdio.h>
#include<stdlib.h>

int num=0;
void permutaciones(int *A, int fila, int reinas){
	int i,j,c;
	if(fila<reinas){
		for(A[fila]=0;A[fila]<reinas;A[fila]++){
			c=0;
			for(j=fila-1;j>=0;j--)
				if(A[j]==A[fila] || A[fila]+fila==A[j]+j || A[fila]-fila==A[j]-j){
					c++;
					break;
				}
			if(c==0){
				permutaciones(A,fila+1, reinas);
			}		
		}
		//A[fila]=-1;
	}else{
		num++;
		printf("\n%d\t",num);
		for(i=0;i<reinas;i++)
			printf("%d\t",A[i]);
	}
}


void main(){
	int *sol,i,reinas=12;
	sol=calloc(reinas,sizeof(int));
	/*for(i=0;i<reinas;i++)
		sol[i]==-1;*/
	printf("\n");
	permutaciones(sol,0,reinas);
	printf("\n\nSoluciones posibles:%d\n\n",num);
	/*for(i=0;i<reinas;i++)
		printf("%d\t",sol[i]);
	printf("\n");*/
}
