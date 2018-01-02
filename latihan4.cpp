#include"unit2.h"
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
