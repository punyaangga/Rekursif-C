#include<stdio.h>
#include<conio.h>
/*
	Program  	: Bilangan Prima
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: Menentukan bilangan prima
*/



int tentukan (int x){
int i;
int count=0;
for(i=2;i<=x/2;i++)
{
if(x%i==0)
count++;
}
if(count>0 || x<2)
printf("%d bukan bilangan prima",x);
else
printf("%d bilangan prima",x);

}
main()
{
int x,tampung;
printf("Penentu bilangan prima\n");
printf("Masukkan sebuah angka : ");
scanf("%d",&x);
tampung=tentukan(x);
}
