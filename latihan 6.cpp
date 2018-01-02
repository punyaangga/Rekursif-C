/*
	Program  	: konversi suhu
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 04-Desember-2017
	Deskripsi 	: konversi suhu
*/
#include <stdio.h>
#include <stdlib.h>
 
float celcius(float suhuc){
	float hasil;
	
		//farenheit
		hasil=(suhuc*1.8)+32;
        printf("\nFarenheit\t: %.2f Fahrenheit\n", hasil);
        //reamure
		hasil=suhuc*0.8;
        printf("Reamur\t\t: %.2f Reamur\n", hasil);
        //kelvin
		hasil=suhuc+273.15;
        printf("Kelvin\t\t: %.2f Kelvin\n", hasil);
} 
float fahrenheit(float suhuf){
	float hasil;
		//celcius
		hasil=(suhuf-32)/1.8;
        printf("\nCelcius\t\t: %.2f Celcius\n", hasil);
        //reamure
		hasil=(suhuf-32)/2.25;
        printf("Reamur\t\t: %.2f Reamur\n", hasil);
        //kelvin
		hasil=((suhuf-32)/1.8)+273.15;
        printf("Kelvin\t\t: %.2f Kelvin\n", hasil);
        
}
float reamure(float suhur){
	float hasil;
	    //celcius
		hasil=suhur/0.8;
        printf("\nCelcius\t\t: %.2f Celcius\n", hasil);
        //fahrenheit
		hasil=(suhur*2.25)+32;
        printf("Farenheit\t: %.2f Fahrenheit\n", hasil);
        //kelvin
		hasil=(suhur/0.8)+273.15;
        printf("Kelvin\t\t: %.2f Kelvin\n", hasil);
    
}
float kelvin(float suhuk){
	float hasil;
		//celcius
	   	hasil=suhuk-273.15;
        printf("Celcius\t\t: %.2f Celcius\n", hasil);
        //fahrenheit
		hasil=((suhuk-273.15)*1.8)+32;
        printf("Farenheit\t: %.2f Fahrenheit\n", hasil);
        //reamure
		hasil=(suhuk-273.15)*0.8;
        printf("Reamur\t\t: %.2f Reamur\n", hasil);
     
}

main()
{
    float suhu,tampung;
    int jenis;
 
    printf("Program Konversi Suhu \n"); 
    printf("=========================\n");
    printf("Pilih satuan suhu yang ingin anda konversikan : \n"); 
    printf("1. Celcius\n");
    printf("2. Fahrenheit\n");
    printf("3. Reamur\n");
    printf("4. Kelvin\n");
    printf("Silahkan anda pilih : ");
    scanf("%d", &jenis);
    switch(jenis)
    {
        case 1:
        printf("Masukkan besar suhu : "); //Konversi suhu Celcius
        scanf("%f", &suhu);
        printf("\nHasil Konversi\t:\n ");
        tampung=celcius(suhu);
        break;
    case 2:
        printf("Masukkan besar suhu : "); //Konversi suhu Fahrenheit
        scanf("%f", &suhu);
        printf("\nHasil Konversi\t:\n");
        tampung=fahrenheit(suhu);
		break;
    case 3:
        printf("Masukkan besar suhu : "); //Konversi suhu Reamur
        scanf("%f", &suhu);
        printf("\nHasil Konversi\t:\n");
        tampung=reamure(suhu);
        break;
    case 4:
        printf("Masukkan besar suhu : ");  //Konversi suhu Kelvin
        scanf("%f", &suhu);
        printf("\nHasil Konversi\t:\n");
        tampung=kelvin(suhu);
		break;
    default:
        printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n"); //Statement kode salah
    
    }
}
