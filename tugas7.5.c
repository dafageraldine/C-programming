#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 1001

int nn=N-1;
double pi;

void monte_carlo() //program untuk nilai pi
{
	double R,x,y,m=1.0;
	for (int i=1;i<=nn;i++) {
		x=(double)rand()/(RAND_MAX);
		y=(double)rand()/(RAND_MAX);
		R = x*x + y*y;
		if(R<1.0) {
			m=m+1.0;
		}
		else
			m=m;
		}
		pi=4*m/(nn);
		printf("\nSimulated Annealing menghasilkan pi= %f",pi);
}

void main()
{
	monte_carlo();
}