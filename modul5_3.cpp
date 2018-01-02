#include<stdio.h>
#include<conio.h>

/*
	Program  	: Modul5_3.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: 
*/
char getIndex(int n){
	char inx;
	if(n>=75)inx='A';
	else if(n>=65)inx='B';
	else if(n>=55)inx='C';
	else if(n>=45)inx='D';
	else inx='E';
	return inx;
	
}
main(){
	int nilai;
	printf("Masukan Nilai Mahasiswa : ");
	scanf("%d",&nilai);
	printf("Index Mahasiswa adalah %c",getIndex(nilai));
	getch();
}
