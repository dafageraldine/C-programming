#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	//tabel nilai tengah
	printf("=======nilai tengah========\n");
	int a[7] = {22,27,32,37,42,47,52};
	for (int i = 0; i < 7; i++)
	{
		printf("%d\n",a[i] );
	}

	//tabel fekuensi
	printf("=========Frekuensi=========\n");
	int b[7] = {5,10,20,30,20,10,5};
	for (int i = 0; i < 7; i++)
	{
		printf("%d\n",b[i]);
	}

	//tabel df
	double c[100];
	printf("=============df============\n");
	for (int i = 0; i < 7; i++)
	{
		c[i] = (float)b[i]/100;
		printf("%1.3f\n",c[i]);
	}

	//rentang angka acak
	printf("=========angka acak========\n");
	double d[100];
	double e[100];
	srand(time(NULL));
	for(int i=1; i<16;i++){
		//e[i] = rand()%100;
		//d[i] = e[i]/100;
		d[i] = (double)rand()/(double)(RAND_MAX);
		printf("%1.3f\n",d[i] );
	}

	//tabel permintaan
	int f[100];
	printf("==========permintaan=========\n");
	f[0] = 37;
	printf("hari ke 0 %d\n", f[0]);
	for (int i = 1; i < 16; i++)
	{
		if (d[i]>=0.000 && d[i]<0.049){
			printf("hari ke %d  ",i );
			printf("%d\n",a[0]);
			f[i] = a[0];
		}
		if (d[i]>=0.050 && d[i]<0.149)
		{
			printf("hari ke %d  ",i );
			printf("%d\n",a[1]);
			f[i] = a[1];
		}
		if (d[i]>=0.150 && d[i]<0.349)
		{
			printf("hari ke %d  ",i );
			printf("%d\n",a[2]);
			f[i] = a[2];
		}
		if (d[i]>=0.350 && d[i]<0.649)
		{
			printf("hari ke %d  ",i );
			printf("%d\n",a[3]);
			f[i] = a[3];
		}
		if (d[i]>=0.650 && d[i]<0.849)
		{
			printf("hari ke %d  ",i );
			printf("%d\n",a[4]);
			f[i] = a[4];
		}
		if (d[i]>=0.850 && d[i]<0.949)
		{
			printf("hari ke %d  ",i );
			printf("%d\n",a[5]);
			f[i] = a[5];
		}
		if (d[i]>=0.950 && d[i]<1.000)
		{
			printf("hari ke %d  ",i );
			printf("%d\n",a[6]);
			f[i] = a[6];
		}
	}

	//skenario1
	printf("==========Skenario 1===========\n==jumlah pesanan====penjualan==\n");
	
	//jumlah pesanan
	int g[100];
	for (int i = 0; i < 15; i++)
	{
		g[i] = f[i];
	}

	int sum = 0;
	for (int i = 0; i < 15; ++i)
	{
		sum = sum + g[i];	
	}
	//penjualan
	int h[100];
	for (int i = 0; i < 15; i++)
	{
		if (g[i] == f[i+1])
		{
			h[i] = g[i];
		}	

		if (g[i] > f[i+1])
		{
			h[i] = f[i+1];
		}

		if(g[i] < f[i+1])
		{
			h[i] = g[i];
		}
	}
	int sum2 = 0;
	for (int i = 0; i < 15; i++)
	{
		printf("       %d       ",g[i]);
		printf("        %d\n",h[i]);
		sum2 = sum2 + h[i];
	}

	printf("total  %d       ",sum);
	printf("       %d\n",sum2);

	//skenario2
	printf("==========Skenario 2===========\n==jumlah pesanan====penjualan==\n");
	
	//jumlah pesanan hanya di print
	//penjualan
	int sum3 = 0;
	int j[100];
	for (int i = 0; i < 15; i++)
	{
		if (37 == f[i+1])
		{
			j[i] = 37;
		}	

		if (37 > f[i+1])
		{
			j[i] = f[i+1];
		}

		if(37 < f[i+1])
		{
			j[i] = 37;
		}
	}

	for (int i = 0; i < 15; i++)
	{
		printf("       37               %d\n",j[i]);
		sum3 = sum3 + j[i]; 
	}
	printf("total  555      ");
	printf("        %d\n",sum3);

	//keuntungan
	printf("==========keuntungan==========\n");
	printf("skenario1 : \n");
	int laba = 0;
	laba = (500*sum2) - (250*sum);
	printf("keuntungan = Rp. %d\n",laba);

	printf("skenario2 : \n");
	int laba2 = 0;
	laba2 = (500*sum3) - (250*555);
	printf("keuntungan = Rp. %d\n",laba2);
} 