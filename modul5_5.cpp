#include<stdio.h>
#include<conio.h>

/*
	Program  	: Modul5_5.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: menghitung persegi panjang dengan fungsi
*/
char inx;

char getIndex(int n){
	if (n>=75)inx='A';
	else if (n>=65)inx='B';
	else if(n>=55)inx='C';
	else if (n>=45) inx='D';
	else inx='E';
}
main (){
	int nilai;
	printf("Masukan nilai mahasiswa : ");
	scanf("%d",&nilai);
	getIndex(nilai);
	printf("Index Mahasiswa adalah %c",inx);
	getch();
}
