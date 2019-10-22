#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b[100];
float c[100];
float d[100];
int e[100];
int i;

int main()
{
	int n = 6 ;

	int a[n];
	printf("Masukkan permintaan pasang sepatu perhari\n");
	for(i=0;i<n;i++){
	scanf("%d", &a[i]);
	}

	printf("Masukkan frekuensi\n");
	for(i=0;i<n;i++){
	scanf("%d", &b[i]);
	}	
	
	float sum =0;
	for(i=0;i<n;i++){
	sum = sum + b[i];
	}

	printf("Distribusi frekuensi\n");
	for (int i = 0; i < n; i++)
	{
		c[i] = b[i]/sum;
		printf("%f\n", c[i] );
	}

	printf("Distribusi kumulatif\n");
	d[0] = c[0];
	for ( i = 0; i < n; i++)
	{
		d[i+1] = d[i] + c[i+1];
		printf("%f\n",d[i] );
	}

	printf("Masukkan 10 angka acak\n");
	srand(time(NULL));
	for(int i=0; i<10;i++){
		e[i] = rand()%100;
		printf("%d   ",e[i] );
	}


	printf("Hasil\n");
	for (int i = 0; i < 10; ++i)
	{
		if (e[i]>0 && e[i]<5){
			printf("%d ",i+1 );
			printf("%d\n",a[0]);
		}
		if (e[i]>6 && e[i]<15)
		{
			printf("%d ",i+1 );
			printf("%d\n",a[1]);
		}
		if (e[i]>16 && e[i]<30)
		{
			printf("%d ",i+1 );
			printf("%d\n",a[2]);
		}
		if (e[i]>31 && e[i]<60)
		{
			printf("%d ",i+1 );
			printf("%d\n",a[3]);
		}
		if (e[i]>61 && e[i]<85)
		{
			printf("%d ",i+1 );
			printf("%d\n",a[4]);
		}
		if (e[i]>86 && e[i]<100)
		{
			printf("%d ",i+1 );
			printf("%d\n",a[5]);
		}
	}
}