#include<stdio.h>

/*
	Program  	: Modul5_6.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: program hitung deret 
*/
int angka;
int hasil;

int hitungDeret(int bil){
	if (bil == 0) {
	return 0;
	}
	else{
	
	return(bil+hitungDeret(bil-1));
	
	}
}

 main(){
	printf("Masukan Angka Batasan Deret: ");
	scanf("%d",&angka);
	hasil=hitungDeret(angka);
	printf("Jumlah deret : %d",hasil);
}

