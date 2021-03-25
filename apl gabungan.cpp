#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

void kalkulator(){
	double nilai1;
	double nilai2;
	int hasiltambah;
	int hasilkurang;
	int hasilkali;
	double hasilbagi;
	int nilai;
	printf("\n kalkulator");
	printf("\n by muhamad zulfikar");
	printf("\n masukan nilai 1 :");
	scanf("%lf",&nilai1);
	printf("\n masukan nilai 2 :");
	scanf("%lf",&nilai2);
	hasiltambah= nilai1+nilai2;
	hasilkurang= nilai1-nilai2;
	hasilkali= nilai1*nilai2;
	hasilbagi= nilai1/nilai2;
	printf("\n pilihan 1 adalah penjumlahan");
	printf("\n pilihan 2 adalah pengurangan");
	printf("\n pilihan 3 adalah perkalian");
	printf("\n pilihan 4 adalah pembagian");
	printf("\n masukan pilihan anda :");
	scanf("%d",&nilai);
	if(nilai==1)
	printf("\n hasil penjumlahan adalah : %d",hasiltambah);
	if(nilai==2)
	printf("\n hasil pengurangan adalah : %d",hasilkurang);
	if(nilai==3)
	printf("\n hasil perkalian adalah : %d",hasilkali);
	if(nilai==4)
	printf("\n hasil pembagian adalah : %.3lf",hasilbagi);
}

void phytagoras(){
	double nilai1;
	double nilai2;
	double a;
	double b;
	double c;
	int nilai;
	
	printf("\n program phytagoras");
	printf("\n                  / |");
	printf("\n             C  /   |");
	printf("\n               /    | A");
	printf("\n              /     |");
	printf("\n            /_______|");
	printf("\n               B ");

	
	cout<<"masukan nilai 1 (a/b) :";
	cin>>nilai1;
	cout<<"masukan nilai 2 (b/c) :";
	cin>>nilai2;
	a=sqrt(pow(nilai2,2)-pow(nilai1,2));
	b=sqrt(pow(nilai2,2)-pow(nilai1,2));
	c=sqrt(pow(nilai2,2)+pow(nilai1,2));
	cout<<"pilihan 1 mencari a"<<endl;
	cout<<"pilihan 2 mencari b"<<endl;
	cout<<"pilihan 3 mencari c"<<endl;
	cout<<"masukan pilihan anda :";
	cin>>nilai;
	if(nilai==1){
	cout<<"hasilnya adalah "<<a<<endl;
	}
	else if(nilai==2){
	cout<<"hasilnya adalah "<<b<<endl;
	}
	else if(nilai==3){
	cout<<"hasilnya adalah "<<c<<endl;
	}
}
void persegipanjang(){
	//tipe data
	int p,le,luas,keliling;
	
	printf("\n program persegi panjang");
	printf("\n masukan panjang : ");
	scanf("%i",&p);
	printf("\n masukan lebar : ");
	scanf("%i",&le);
	luas = p*le;
	printf("\n hasilnya adalah %d",luas);
	keliling = (2*p)+(2*le);
	printf("\n hasilnya adalah %d",keliling);
}

void persegi(){
	int s,keliling,luas;
	
	printf("\n program menghitung persegi");
	printf("\n masukan sisi : ");
	scanf("%d",&s);
	keliling = 4*s;
	luas = s*s;
	printf("\n hasil keliling adalah %d",keliling);
	printf("\n hasil luas adalah %d",luas);
}

void balok(){
	int p,l,t;
	int volume,luas;
	
	printf("\n program menghitung balok");
	printf("\n masukan panjang : ");
	scanf("%d",&p);
	printf("\n masukan lebar : ");
	scanf("%d",&l);
	printf("\n masukan tinggi : ");
	scanf("%d",&t);
	volume = p*l*t;
	luas = 2*((p*l)+(p*t)+(l*t));
	printf("\n hasil volume adalah %i",volume);
	printf("\n hasil luas adalah %i",luas);
}

void kubus(){
	int s,volume,luas;
	
	printf("\n program menghitung kubus");
	printf("\n masukan sisi : ");
	scanf("%d",&s);
	volume = pow(s,3);
	luas = 6*(pow(s,2));
	printf("\n hasil volume adalah %d",volume);
	printf("\n hasil luas adalah %d",luas);
}

void luassegitiga(){
	double a,t,luas;
	
	printf("\n program luas segitiga");
	printf("\n masukan alas : ");
	scanf("%lf",&a);
	printf("\n masukan tinggi : ");
	scanf("%lf",&t);
	luas = (a*t)/2;
	printf("\n luas segita : %.3lf",luas);
}

void gaya(){
	//tipe data
	int f,m,a;
	printf("\n program mencari gaya");
	printf("\n masukan massa : ");
	scanf("%d",&m);
	printf("\n masukan percepatan : ");
	scanf("%d",&a);
	f = m*a;
	printf("\n besar gaya tersebut adalah :  %d",f);
}

void suhu(){
	//tipe data
	double c,r,f;
	
	printf("\n program konversi suhu ");
	printf("\n masukan nilai celcius : ");
	scanf("%lf",&c);
	r = c*0.8;
	f = c*1.8+32;
	printf("\n hasil konversi suhu dari c ke r adalah : %.3lf",r);
	printf("\n hasil koversi suhu dari c ke f  adalah : %.3lf",f);
}

void kecepatan(){
	//tipe data
	double s,t,v;
printf("\n mencari nilai kecepatan dalam satuan km");
	printf("\n masukan jarak yang akan ditempuh : ");
	scanf("%lf",&s);
	printf("\n masukan waktu tempuh : ");
	scanf("%lf",&t);
	v = s/t;
	printf("\n kecepatan adalah : %.3lf",v);
	printf("   km/jam");
}

void diskon(){
	long bayar,akhir,diskon;
	cout<<"program menghitung diskon"<<endl<<"by muhamad zulfikar"<<endl<<endl;
	cout<<"masukan total pembayaran =";
	cin>>bayar;
	if((bayar>=1000000) && (bayar<3000000)){
		diskon = bayar*0.05;
		akhir = bayar-diskon;
		cout<<"selamat anda mendapatkan diskon 5%"<<endl;
	} else if((bayar>=3000000) && (bayar<5000000)){
		diskon = bayar*0.1;
		akhir = bayar-diskon;
		cout<<"selamat anda mendapat diskon 10%"<<endl;
	} else if(bayar>=5000000){
		diskon = bayar*0.15;
		akhir =  bayar-diskon;
		cout<<"selamat anda mendapatkan diskon 15%"<<endl;
	} else{
		akhir=bayar;
	}
	cout<<"jadi total pembayarannya = "<<akhir<<endl;
}

void lingkaran(){
	//tipe data
	long phi=3.14,r,d,keliling,luas;
	
	cout<<"program menghitung jari jari  lingkaran"<<endl;
	cout<<"by muhamad zulfikar"<<endl;
	cout<<"inputkan jari jari :   ";
	cin>>r;
	d=r+r;
	keliling=phi*d;
	luas=phi*pow(r,2);
	cout<<"hasil keliling jari jari lingkaran adalah "<<keliling<<endl;
	cout<<"hasil luas jari jari lingkaran adalah "<<luas<<endl;
}

void kalkulator2(){
	float nilai1;
	float nilai2;
	double penjumlahan;
	double pengurangan;
	double perkalian;
	double perpangkatan1;
	double perpangkatan2;
	double pangkatpenjumlahan;
	double pangkatpengurangan;
	double pangkatperkalian;
	float akar1;
	float akar2;
	float akarpenjumlahan;
	float akarpengurangan;
	float akarperkalian;
	float akarpembagian;
	float pangkatpembagian;
	float pembagian;
	//tipe data
	//body
	cout<<"program kalkulator untuk nostaslgia"<<endl;
	cout<<"==================================="<<endl;
	cout<<"masukan niai 1 : ";
	cin>>nilai1;
	cout<<"masukan nilai 2 :";
	cin>>nilai2;
	penjumlahan        = nilai1+nilai2;
	pengurangan        = nilai1-nilai2;
	perkalian          = nilai1*nilai2;
	pembagian          = nilai1/nilai2;
	perpangkatan1      = pow(nilai1,2);
	perpangkatan2      = pow(nilai2,2);
	pangkatpenjumlahan = pow(nilai1,2)+pow(nilai2,2);
	pangkatpengurangan = pow(nilai1,2)-pow(nilai2,2);
	pangkatperkalian   = pow(nilai1,2)*pow(nilai2,2);
	pangkatpembagian   = pow(nilai1,2)/pow(nilai2,2);
	akar1              = sqrt(nilai1);
	akar2              = sqrt(nilai2);
	akarpenjumlahan    = sqrt(nilai1)+sqrt(nilai2);
	akarpengurangan    = sqrt(nilai1)-sqrt(nilai2);
	akarperkalian      = sqrt(nilai1)*sqrt(nilai2);
	akarpembagian      = sqrt(nilai1)/sqrt(nilai2);
	cout<<"penjumlahan          : "<<penjumlahan       <<endl;
	cout<<"pengurangan          : "<<pengurangan       <<endl;
	cout<<"perkalian            : "<<perkalian         <<endl;
	cout<<"pembagian            : "<<pembagian         <<endl;
	cout<<"perpangkatan nilai 1 : "<<perpangkatan1     <<endl;
	cout<<"perpangkatan nilai 2 : "<<perpangkatan2     <<endl;
	cout<<"pangkat penjumlahan  : "<<pangkatpenjumlahan<<endl;
	cout<<"pangkat pengurangan  : "<<pangkatpengurangan<<endl;
	cout<<"pangkat perkalian    : "<<pangkatperkalian  <<endl;
	cout<<"pangkat pembagian    : "<<pangkatpembagian  <<endl;
	cout<<"akar nilai 1         : "<<akar1             <<endl;
	cout<<"akar nilai 2         : "<<akar2             <<endl;
	cout<<"akar penjumlahan     : "<<akarpenjumlahan   <<endl;
	cout<<"akar pengurangan     : "<<akarpengurangan   <<endl;
	cout<<"akar perkalian       : "<<akarperkalian     <<endl;
	cout<<"akar pembagian       : "<<akarpembagian     <<endl;
}
	
int main(){
	//tipe data
	int nilai1;
	printf("\n  ");
	printf("\n program gabungan karya muhamad zulfikar");
	printf("\n menu : ");
	printf("\n ");
	printf("\n      :  1.kalkulator ");
	printf("\n      :  2.phytagoras");
	printf("\n      :  3.persegi panjang ");
	printf("\n      :  4.persegi");
	printf("\n      :  5.balok");
	printf("\n      :  6.kubus");
	printf("\n      :  7.lingkaran");
	printf("\n      :  8.luas segitiga");
	printf("\n      :  9.gaya");
	printf("\n      : 10.suhu");
	printf("\n      : 11.kecepatan");
	printf("\n      : 12.diskon");
	printf("\n      : 13.kalkulator2");
	printf("\n ");
	printf("\n masukan pilihan anda : ");
	scanf("%i",&nilai1);
	if(nilai1==1){
		kalkulator();
	}
	else if(nilai1==2){
		phytagoras();
	}
	else if(nilai1==3){
		persegipanjang();
	}
	else if(nilai1==4){
		persegi();
	}
	else if(nilai1==5){
		balok();
	}
	else if(nilai1==6){
		kubus();
	}
	else if(nilai1==7){
		lingkaran();
	}
	else if(nilai1==8){
		luassegitiga();
	}
	else if(nilai1==9){
		gaya();
	}
	else if(nilai1==10){
		suhu();
	}
	else if(nilai1==11){
		kecepatan();
	}
	else if(nilai1==12){
		diskon();
	}
	else if(nilai1=13){
		kalkulator2();
	}
	return 0;
	
}
