#include <stdio.h>
#include <stdlib.h>
#define N 1001

int nn=N-1;
int n1[N];
int n2[N];

void bangkit(){
	for (int i=0;i<nn; i++){
		n1[i]=(int)rand()%2;
		n2[i]=(int)rand()%2;
		//printf("\n x[%d]: %d",i,x[i]);
	}
}

void klasfikasi(){
	double MM=0.0,MB=0.0,BB=0.0;
	for (int i=0;i<nn; i++){
		if(n1[i]==0 && n2[i]==0)
		MM=MM+1;
		if(n1[i]==0 && n2[i]==1 || n1[i]==1 && n2[i]==0 )
		MB=MB+1;
		if(n1[i]==1 && n2[i]==1)
		BB=BB+1;
	}
	printf("\n Nilai Terbangkit");
	printf("\n MM=%f \t BB=%f \t MB=%f",MM,BB,MB);
	printf("\n\n Probabilitas");
	printf("\n p(MM)=%f  p(BB)=%f  p(MB)=%f\n",(MM)/nn,(BB)/nn,(MB)/nn);
}

void main()
{
	bangkit();
	klasfikasi();
}