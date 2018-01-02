#include<stdio.h>
#include<conio.h>

/*
	Program  	: Aritmatika
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: Aritmatika
*/

float aritmatika(float a,float b){
	
float bagi,tambah,kurang,kali;
bagi=a/b;
tambah=a+b;
kurang=a-b;
kali=a*b;
//tampilkan
printf("%.0f + %.0f = %.0f \n",a,b,tambah);
printf("%.0f - %.0f = %.0f \n",a,b,kurang);
printf("%.0f / %.0f = %.2f \n",a,b,bagi);
printf("%.0f * %.0f = %.2f \n",a,b,kali);
}
main(){
	float a,b,hasil;
	
	printf("Masukan Nilai Pertama : ");
	scanf("%f",&a);
	printf("Masukan Nilai Kedua : ");
	scanf("%f",&b);
	hasil=aritmatika(a,b);
	return hasil;
}

