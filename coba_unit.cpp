#include"unit1.h"
main(){
	//kamus
	int pj,lb,lp;
	float jari,ll;
	
	//algoritma
	//hitung luas persegi
	
	printf("Menghitung Luas Persegi\n");
	printf("------------------------\n");
	printf("Masukan Panjang = ");
	scanf("%d",&pj);
	printf("Masukan Lebar = ");
	scanf("%d",&lb);
	LuasPersegi(pj,lb,&lp);
	printf("Luas Persegi = %d",lp);
	
	printf("\n------------------------");
	printf("\nMenghitung Luas Lingkaran\n");
	printf("-------------------------\n");
	printf("Masukan Jari-Jari = ");
	scanf("%f",&jari);
	LuasLingkaran(jari,&ll);
	printf("Luas lingkaran = %.2f",ll);
	
}
