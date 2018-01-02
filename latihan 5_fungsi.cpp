#include<conio.h>
#include<stdio.h>

/*
	Program  	: Tukar Angka
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: Tukar Angka(fungsi)
*/
int tukar(int a,int b){
int c;
c=a;
a=b;
b=c;
}

 main(){
	int a,b,hasil;
	printf("Masukan Nilai 1 = ");
	scanf("%d",&a);
	printf("Masukan Nilai 2 = ");
	scanf("%d",&b);
	
	hasil=tukar(a,b);
	
	//printf("\n Hasil setelah ditukar\n\n");
	printf("Nilai 1 = %d\n",b);
	printf("Nilai 2 = %d",a);
	return hasil;
}
