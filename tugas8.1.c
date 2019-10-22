#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

float x[100],y[100],e,e0pt;
int n,s0pt[100],s[100];

void Kota(){
	int n;
	printf("masukkan jumlah kota\n");
	scanf("%d",&n);

	for (int i = 0; i < n; i++)
	{
		x[i]=(float)(10*rand()/RAND_MAX);
		y[i]=(float)(10*rand()/RAND_MAX);
	}
}

float Energi(){
	float jarak = 0;
	int i,j,dx,dy;
	for(i=0;i<n-1;i++){
	dx=sqr(x[s[i]]-x[s[i+1]]);
	dy=sqr(y[s[i]]-y[s[i+1]]);
	d=sqrt(dx+dy);
	jarak=jarak+d;
	}
	dx=sqr(x[s[n-1]]-x[s[0]]);
	dy=sqr(y[s[n-1]]-y[s[0]]);
	d=sqrt(dx+dy);
	jarak=jarak+d;
	return jarak;
}

void Stateawal(){
	for (int i = 0; i < n; i++) s[i] = i;
		Energi();
}

void Stateoptimal(){
	for (int i = 0; i < n; i++) s0pt[i] = s[i];
		e0pt = e;
}

void Statetampil(){
	for (int i = 0; i < n; i++)
	{
	printf("%d   ",s0pt[i] );
	}

	printf("energi= %f",e0pt);
}

void Updatestate(){
	int k1,k2;
	for (int i = 0; i < n; i++) s[i] = s0pt[i];
		k1=int ()
}

int main (){

}