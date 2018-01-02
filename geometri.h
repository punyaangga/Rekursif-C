#include<stdio.h>
#include<conio.h>
#define phi 3.14
//mencari luas
void segi(float a,float t, float *luas){
	*luas=a*t/2;
}
void segitiga(int a, int t,int *luas){
	*luas=a*t/2;
}
void lingkaran(float r,float *ll){
	*ll=phi*r*r;
}
void persegi(int p, int l, int *luas){
	*luas=p*l;
}

//mencari keliling
void ksegitiga(int s1, int s2,int s3, int *keliling){ //segitiga sembarang
	*keliling=s1+s2+s3;
}
void klingkaran(float d,float *keliling){
	*keliling= phi*d;
}
void kpersegi (int s1,int s2, int *keliling){
	*keliling=(s1*2)+(s2*2);
}
