#include <stdio.h>

void gaya(){
	//tipe data
	int f,m,a;
	printf("\n program mencari gaya");
	printf("\n masukan massa : ");
	scanf("%i",&m);
	printf("\n masukan percepatan : ");
	scanf("%i",&a);
	f = m*a;
	printf("\n besar gaya tersebut adalah :  %i",f);
}

void suhu(){
	//tipe data
	float c,r,f;
	
	printf("\n program konversi suhu ");
	printf("\n masukan nilai celcius : ");
	scanf("%f",&c);
	r = c*0.8;
	f = c*1.8+32;
	printf("\n hasil konversi suhu dari c ke r adalah : %f",r);
	printf("\n hasil koversi suhu dari c ke f  adalah : %f",f);
}

void kecepatan(){
	//tipe data
	float s,t,v;
printf("\n mencari nilai kecepatan dalam satuan km");
	printf("\n masukan jarak yang akan ditempuh : ");
	scanf("%f",&s);
	printf("\n masukan waktu tempuh : ");
	scanf("%f",&t);
	v = s/t;
	printf("\n kecepatan adalah : %f",v);
	printf("   km/jam");
}

int main(){
	int nilai1;
	
	printf("\n apl fisika");
	printf("\n pilihan : ");
	printf("\n 1. mencari gaya");
	printf("\n 2. konversi suhu ");
	printf("\n 3. menentukan kecepatan km/jam");
	printf("\n masukan pilihan anda : ");
	scanf("%i",&nilai1);
	if(nilai1==1){
		gaya();
	}if(nilai1==2){
		suhu();
	}if(nilai1==3){
		kecepatan();
	}
	main();
}
