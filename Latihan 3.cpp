#include<conio.h>
#include <stdio.h>
#include <cmath>

/*
	Program  	: Konversi Angka Ke Huruf
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: Konversi Angka Ke Huruf 
*/

void satuan (int a)
{
if (a==1) {
printf("Satu");
}
else if (a==2) {
printf("Dua");
}
else if (a==3) {
printf("Tiga");
}
else if (a==4) {
printf("Empat");
}
else if (a==5) {
printf("Lima");
}
else if (a==6) {
printf("Enam");
}
else if (a==7) {
printf("Tujuh");
}
else if (a==8) {
printf("Delapan");
}
else if (a==9) {
printf("Sembilan");
}
else if (a==10) {
printf("Sepuluh");
}
else if (a==11) {
printf("Sebelas");
}
}
void terbilang (int b)
{
if (b<=11) {
satuan(b);
}
else if ((b>11) && (b<=19)) {
terbilang(b%10);
printf(" Belas");
}
else if ((b>=20)&&(b<=99)) {
terbilang(b/10);
printf(" Puluh");
terbilang(b%10);
}
else if ((b>=100)&&(b<=199)) {
printf("Seratus");
terbilang(b%100);
}
else if ((b>=200)&&(b<=999)) {
terbilang(b/100);
printf(" Ratus");
terbilang(b%100);
}
else if ((b>=1000)&&(b<=1999)) {
printf("Seribu");
terbilang(b%1000);
}
else if ((b>=2000)&&(b<=9999)) {
terbilang(b/1000);
printf(" Ribu");
terbilang(b%1000);
}
else if ((b>=10000)&&(b<=99999)) {
terbilang(b/1000);
printf(" Ribu");
terbilang(b%1000);
}
else if ((b>=100000)&&(b<=999999)) {
terbilang(b/1000);
printf(" Ribu");
terbilang(b%1000);
}
else if ((b==1000000)) {
terbilang(b/1000000);
printf(" Juta");
terbilang(b%1000000);
}
else if ((b>1000000))
{
printf(" Nilai Yang Anda Masukan Salah");
}
}


int main()
{
int nilai;

printf("Aplikasi Konversi Angka Menjadi Huruf \n");
printf("===========================================\n");
printf("Masukan Angka = ");
scanf("%d",&nilai);

if (nilai<0){
printf(" Minus ");
terbilang( abs(nilai));
} else {
terbilang( nilai);
}

}
