#include<stdio.h>
int main()
{
	int yeni_bakiye;
	int secim;
	int a,b;
	int i;
	int bakiye = 3000;
	int sifre;
	label:
	printf("merhaba devam etmek icin sifrenizi giriniz : \n");
	scanf("%d",&sifre);	
	if(sifre==8254){
		printf("sifreniz dogru hosgeldiniz \n");
	}
	else{
		printf("sifreniz yanlis lutfen tekrar deneyiniz\n");
		goto label ;
	}
	bas:
	printf("lutfen islem tipini seciniz :\n");
	printf("1- hesap bakiyesi \n");
	printf("2- para cekme\n");
	printf("3- para yatirma \n");
	printf("4- cikis \n");
	scanf("%d", &secim);
	switch (secim) {
		case 1:
			printf("mevcut hesap bakiyesi : %d \n ",bakiye);
			goto bas;
			break;
		case 2 :
			printf("cekmek istediginiz tutari giriniz : ");
			scanf("%d",&b);
			if (b<=bakiye && b>0){
			
			yeni_bakiye = bakiye - b;
			printf("yeni bakiyeniz : %d",yeni_bakiye);
			}
			else {
			printf("islem basarisiz bakiye yetersiz !");	
			}
			goto bas;
			break;
		case 3:
			printf("yatirmak istediginiz tutari giriniz");
			scanf("%d",&a);
			yeni_bakiye = bakiye + a;
			printf("güncel bakiyeniz : %d TL",yeni_bakiye);
			goto bas;
			break;
		case 4 :
			printf("cikis yapiliyor ...");
			return 0;
		default:
			printf("gecersiz islem yaptiniz. ");
			goto bas;
			
	
	}
}


