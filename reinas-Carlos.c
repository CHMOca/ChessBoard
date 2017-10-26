#include<stdio.h>
#include<stdlib.h>

#define reinas 8

int num=0;
void permutaciones(int A[], int fila){
	int i,j,b;
	if(fila<reinas){
		for(A[fila]=0;A[fila]<reinas;A[fila]++){
			b=0;
			for(i=0;i<fila;i++){
				if(A[i]==A[fila])
					b++;
			}
			if(b==0)
				permutaciones(A,fila+1);
		}
	}else{
		b=0;
		for(i=0;i<reinas-1;i++)
			for(j=i+1;j<reinas;j++)
				if(A[i]+i==A[j]+j || A[i]-i==A[j]-j)
					b++;
		if(b==0){
			num++;
			printf("\n%d\t",num);
			for(i=0;i<reinas;i++)
				printf("%d\t",A[i]);
		}
	}
}


void main(){
	int sol[reinas];
	printf("\n");
	permutaciones(sol,0);
	printf("\n\nSoluciones posibles:%d\n\n",num);
}
