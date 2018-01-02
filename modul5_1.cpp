#include<stdio.h>
#include<conio.h>

/*
	Program  	: Modul5_1.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: menghitung luas persegi 
*/
main (){
	//variabel lokal
	int p,l;
	int luas;
	
	printf("Masukan Lebar : ");
	scanf("%d",&l);
	printf("Masukan Panjang : ");
	scanf("%d",&p);
	luas=p*l;
	printf("Luas Persegi : %d",luas);
	getch();
}
