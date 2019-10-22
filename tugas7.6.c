#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

double x,y;
int diterima = 0,ditolak = 0;
int i,fx;

int main(){
	srand(time(NULL));
	for(i=1;i<=1000;i++)
	{
		x=rand()%2+1;
		y=rand()%4+1;
		fx= 2 * x;
		if (y<fx)
		{
		diterima++;
		}
		else
		ditolak++;
	}
	//8 diasumsikan sebagai luas kotak
	double luas = ((double)diterima/(double)ditolak)*8;

	printf("diterima %d \t ditolak %d \t luas %f \t\n", diterima,ditolak,luas );
}