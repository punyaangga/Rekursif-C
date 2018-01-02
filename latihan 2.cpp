#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<conio.h>

/*
	Program  	: Deret Vibonisasi
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: Mencari Deret Vibonisasi 
*/

int suku,a=0,b=1,c=0;

void deretVibonasi(){
	c=a+b;
	a=b;
	b=c;
	printf("%d\n",c);
	
} 
main(){
	int i;
	printf("Masukan suku ke - ");
	scanf("%d",&suku);
	printf("%d\n%d\n",a,b);
	for(i=3;i<=suku;i++){
		deretVibonasi();
	}
	//getch();
}
