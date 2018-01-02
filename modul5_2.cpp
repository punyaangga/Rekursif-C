#include<stdio.h>
#include<conio.h>

/*
	Program  	: Modul5_2.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: menghitung persegi panjang dengan fungsi
*/
int hitungLuas(int p,int l){
	int luas;//variabel lokal
	luas=p*l;
	return luas;
}
 main(){

	int p,l;
	int luas;
	
	printf("Masukan Lebar : ");
	scanf("%d",&l);
	printf("Masukan Panjang : ");
	scanf("%d",&p);
	luas=hitungLuas(p,l);
	printf("Luas Persegi : %d",luas);
	getch();	
}
