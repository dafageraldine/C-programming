#include <stdio.h>
#include <stdlib.h>
#define N 1001

int nn=N-1;
int x[N];

void bangkit(){
	for (int i=0;i<nn; i++){
		x[i]=(int)rand()%2;
		//printf("\n x[%d]: %d",i,x[i]);
	}
}

void klasfikasi(){
	double M=0.0,B=0.0;
	for (int i=0;i<nn; i++){
		if(x[i]==0)
		M=M+1;
		else
		B=B+1;
	}
	printf("\n Nilai Terbangkit");
	printf("\n M=%f \t B=%f",M,B);
	printf("\n\n Probabilitas");
	printf("\n p(M)=%f \t p(B)=%f",M/nn,B/nn);
}

void main()
{
	bangkit();
	klasfikasi();
}