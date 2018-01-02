#include"geometri.h"
#include <stdlib.h>

main(){
	/**Variabel Luas**/
	float a,t,lg;//luas segitiga 
	float r,ll;//luas lingkaran
	int p,l,luas;//luas persegi
	
	/**Variabel Keliling**/
	int s1,s2,s3,ks;//keliling segitiga
	float d,kl;//keliling lingkaran
	int sp1,sp2,kp;//keliling persegi
	
	int pil1,pil2;	
	
	
	while(pil1!=3)
	{
	pil1=0;
	pil2=0;
	printf("=================\n");
	printf("Program Geometri\n");
	printf("=================\n");
	printf("1. Hitung Luas Bangun\n");
	printf("2. Hitung Keliling Bangun\n");
	printf("3. Exit\n");
	printf("Masukan Pilihan = ");
	scanf("%d",&pil1);
		
	system("CLS");			
				
				if ( pil1==1)
				{
					while(pil2!=4){
					printf("\n=======================\n");
					printf("Menghitung Luas Bangun\n");
					printf("=======================\n");
					printf("1. Segitiga\n");
					printf("2. Persegi\n");
					printf("3. Lingkaran\n");
					printf("4. Kembali Ke Menu Awal\n\n");
					printf("Masukan Pilihan : ");
					scanf("%d",&pil2);
					system("CLS");
					
						if(pil2==1){
							printf("\n==Program Menghitung Luas Segitiga==\n");
							printf("\nMasukan Alas  : ");
							scanf("%f",&a);
							printf("Masukan Tinggi : ");
							scanf("%f",&t);
							segi(a,t,&lg);
							printf("Luas Segitiga adalah = %.2f",lg);
							
						}
						else if (pil2==2){
							printf("\n===Program Menghitung Luas Persegi===\n");
							printf("\nMasukan Panjang : ");
							scanf("%d",&p);
							printf("Masukan Lebar : ");
							scanf("%d",&l);
							persegi(p,l,&luas);
							printf("Luas Persegi adalah = %d",luas);
							
						}
						else if (pil2==3){
							printf("\n===Program Menghitung Luas Lingkaran===\n");
							printf("\nMasukan Jari Jari : ");
							scanf("%f",&r);
							lingkaran(r,&ll);
							printf("Luas Persegi adalah = %f",ll);
							
						}else {
							printf("\nPilihan Tak Tersedia");
						system("CLS");
						}
					
					}	
				}
					
//Menghitung Keliling 
	
					 else if(pil1 == 2)
					 {
						while(pil2!=4){
						printf("\n===========================\n");
						printf("Menghitung Keliling Bangun\n");
						printf("============================\n");
						printf("1. Segitiga\n");
						printf("2. Persegi\n");
						printf("3. Lingkaran\n");
						printf("4. Kembali Ke Menu Awal\n\n");	
						printf("Masukan Pilihan : ");
						scanf("%d",&pil2);
						system("CLS");
					 		
							 if(pil2==1)
							 {
								printf("\n==Program Menghitung Keliling Segitiga==\n");
								printf("\nMasukan Sisi 1  : ");
								scanf("%d",&s1);
								printf("Masukan Sisi 2 : ");
								scanf("%d",&s2);
								printf("Masukan Sisi 3 : ");
								scanf("%d",&s3);
								ksegitiga(s1,s2,s3,&ks);
								printf("Keliling Segitiga adalah = %d",ks);
							 } 
								else if (pil2==2)
								{
									printf("\n===Program Menghitung Keliling Persegi===\n");
									printf("\nMasukan Sisi ke 1 : ");
									scanf("%d",&sp1);
									printf("Masukan Sisi Ke 2 : ");
									scanf("%d",&sp2);
									kpersegi(sp1,sp2,&kp);
									printf("Keliling Persegi adalah = %d",kp);
								}
									else if (pil2==3)
									{
										printf("\n===Program Menghitung Keliling Lingkaran===\n");
										printf("\nMasukan Diameter Lingkaran : ");
										scanf("%f",&d);
										klingkaran(d,&kl);
										printf("Keliling Lingkaran adalah = %f",kl);
									}else {
									printf("\nPilihan Tak Tersedia");
									system("CLS");
									}
					 }
					 
					 
					 
					 }
					 else if(pil1==3){
					 	printf("\nKeluar");
					 }
					 else{
					 	printf("Pilihan tidak tersedia\n\n");
					 	//system("CLS");
					 }
				
				}
				 	
				}
				
		
		





