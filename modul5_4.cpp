
#include<stdio.h>
#include<conio.h>

/*
	Program  	: Modul5_2.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: 
*/
void hitungLuas(int p,int l,int&luas){
	luas=p*l;
}
 main(){


	int pj,lb;
	int luasUtama;
	
	printf("Masukan Lebar : ");
	scanf("%d",&pj);
	printf("Masukan Panjang : ");
	scanf("%d",&lb);
	hitungLuas(pj,lb,luasUtama);
	printf("Luas Persegi : %d",luasUtama);
	getch();	
}
