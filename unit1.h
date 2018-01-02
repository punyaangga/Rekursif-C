#include<stdio.h>
#include<conio.h>
#define phi 3.14

void LuasPersegi(int p, int l, int *luas){
	*luas= p*l;
}
void LuasLingkaran(float r,float *luas){
	*luas=phi*r*r;
}
