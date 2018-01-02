int a(int dolar, int tdolar){
	int hasil;
	hasil=tdolar * dolar;
}
int b(int ringgit,int tringgit){
	int hasil;
	hasil=tringgit * ringgit;
}
int c(int yen,int tyen){
	int hasil;
	hasil=tyen*yen;
}
int d(int uero, int tuero){
	int hasil;
	hasil=tuero*uero;
}

#include<conio.h>
#include<stdio.h>
/*
	Program  	: konversi Mata Uang
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: konversi Mata Uang
*/

main(){
	int dolar,ringgit,uero,yen;
	int tdolar,tringgit,tuero,tyen;
	int hasil;
	
	printf("Program Konversi Mata Uang");
	printf("\nKet : Nilai Tukar Di Isi Oleh User");
	printf("\n====================================\n\n");
	//dolar
	printf("Masukan Nilai Dolar : ");
	scanf("%d",&dolar);
	printf("Masukan Nilai Tukar Dolar Ke Rupiah : ");
	scanf("%d",&tdolar);
	//yen
	printf("\nMasukan Nilai Yen : ");
	scanf("%d",&yen);
	printf("Masukan Nilai Tukar Yen Ke Rupiah : ");
	scanf("%d",&tyen);
	//ringgit
	printf("\nMasukan Nilai Ringgit : ");
	scanf("%d",&ringgit);
	printf("Masukan Nilai Tukar Ringgit Ke Rupiah : ");
	scanf("%d",&tringgit);
	//Ueoro
	printf("\nMasukan Nilai Uero : ");
	scanf("%d",&uero);
	printf("Masukan Nilai Tukar Ueoro  Ke Rupiah : ");
	scanf("%d",&tuero);
	
	hasil= a(dolar,tdolar);
	printf("\n\nKonversi Dolar ke Rupiah \tRp%d",hasil);
	hasil= b(ringgit,tringgit);
	printf("\nKonversi Ringgit ke Rupiah \tRp%d",hasil);
	hasil= c(yen,tyen);
	printf("\nKonversi Yen ke Rupiah \t\tRp%d",hasil);
	hasil= d(uero,tuero);
	printf("\nKonversi Ueoro ke Rupiah \tRp%d",hasil);
	
	
	
}
