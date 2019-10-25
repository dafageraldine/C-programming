#include <iostream>
#include <stdlib.h>
#include <math.h>
float x[100], y[100];
int s[100], sOpt[100], nKota;
float e, eOpt;

using namespace std;
// Membangkitkan data kota
// dan koordinatnya secara acak

void BangkitkanDataKota(){
	cout << "Jumlah kota = "; cin >> nKota
	
	for(int i=0;i<n;i++){
		x[i]=(float)(10*rand()/RAND_MAX);
		y[i]=(float)(10*rand()/RAND_MAX);
	}
}

// denganmengurutkanlangsung
void BangkitkanStateAwal(){
	for(int i=0;i<n;i++) s[i]=i;
	hitungEnergi();
}
// State Optimal
void StateOptimal() {
	for(int i=0;i<n;i++) sOpt[i]=s[i];
	eOpt=e;
}
// MenampilkanState
void TampilkanState() {
	for(inti=0;i<n;i++) cout<< sOpt[i] << " ";
	cout<< " energi= " << eOpt<< endl;
}

float hitungEnergi(){
	float jarak=0;
	inti,j;
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

// Update state
void UpdateState(){
	intk1,k2,i;
	for(i=0;i<n;i++) s[i]=sOpt[i];
	k1=int(nKota*(float)rand()/RAND_MAX);
	k2=int((nKota-k1)*(float)rand()/RAND_MAX)+k1;
	for(i=k1;i<k2;i++){
		s[i]=sOpt[k2+k1-i];
	}
	hitungEnergi();
}

void main(){
	inti, maxIter;
	float p, To, Tn, T;
	cout<< "jumlah iteras imax = ";
	cin>> maxIter;
	To=0.1; Tn=0.0001;
	BangkitkanDataKota();
	BangkitkanStateAwal();
	StateOptimal();
	TampilkanState();
	for(i=0;i<maxIter;i++){
		UpdateState();
		p=rand;
		if(p<exp(-(e-eOpt)/T)) StateOptimal();
		TampilkanState();
		T=To*(float)pow(Tn/To,i/n);
	}
}