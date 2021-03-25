#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int kop(){
printf("\n  muhamad zulfikar store ");
printf("\n __________________________________");
printf("\n |     barang    |  harga         |");
printf("\n |_______________|________________|");
printf("\n | jam tangan    |Rp.200.000      |");
printf("\n |     laptop    |Rp.5.000.000    |");
printf("\n |  handphone    |Rp.3.000.000    |");
printf("\n |    speaker    |Rp.200.000      |");
printf("\n |   headseat    |Rp.50.000       |");
printf("\n |  powerbank    |Rp.100.000      |");
printf("\n |________________________________|");
printf("\n barang yang sudah dibeli tidak bisa ditukar");
}
void barang(){
	int nilai1;
printf("\n 1.jam tangan");
printf("\n 2.laptop");
printf("\n 3.handphone");
printf("\n 4.speaker");
printf("\n 5.headset");
printf("\n 6.powerbank");
printf("\n masukan nomor barang yang ingin dibeli : ");
scanf("%i",&nilai1);
if(nilai1==1){
printf("\n anda membeli jam tangan");
}
else if(nilai1==2){
printf("\n anda membeli laptop");
}
else if(nilai1==3){
printf("\n anda membeli handphone ");
}
else if(nilai1==4){
printf("\n anda membeli speaker");
}
else if(nilai1==5){
printf("\n anda membeli headset");
}
else if(nilai1==6){
printf("\n anda membeli powerbank");
}
else{
	printf("\n anda salah memasukan keyword");
}
}

void Input ()
{
    int i;
   float n, jum, x;
   cout<<"                DAFTAR PEMBELIAN BARANG   "<<endl<<endl;
   cout<<"Banyaknya Barang Yang Dibeli : ";
   cin>>n;
   cout<<"  "<<endl;
   i=0;
   jum=0;
   do
       {
          i++;
         cout<<"Harga Barang ke-"<<i<<" : Rp ";
         cin>>x;
         jum=jum+x;
      }
   while (i<n);
   cout<<"           Jumlah : Rp "<<jum<<endl;
   cout<<"  "<<endl;
   cout<<"Tekan ENTER untuk Melakukan Pembayaran"<<endl;
   cout<<"  "<<endl;
   getch ();
}

void banyak(){
	int nilai1;
printf("\n masukan banyak pembelian : ");
scanf("%i",&nilai1);
if((nilai1>=5) && (nilai1<10)){
	printf("\n anda mendapat paket data 1GB");
} 
else if((nilai1>=10) && (nilai1<20)){
	printf("\n anda mendapat paket data 2GB");
} 
else if((nilai1>=20) && (nilai1<30)){
	printf("\n anda mendapat paket data 3GB");
} 
else{
	printf("\n mohon maaf anda tidak mendapatkan hadiah");
}
}

void pembayaran(){
	float bayar,kembalian,uang;
printf("\n masukan jumlah uang anda : ");
scanf("%f",&uang);
printf("\n masukan jumlah harga barang : ");
scanf("%f",&bayar);
kembalian = uang-bayar;
printf("\n kembalian anda adalah : %f",kembalian);
printf("\n terima kasih telah berkunjung");
}

int main(){
	int nilai1;
	kop();
    printf("\n ");
	printf("\n 1.nama barang");
	printf("\n 2.daftar pembelian barang");
	printf("\n 3.banyak barang");
	printf("\n 4.pembayaran");
	printf("\n masukan pilihan anda : ");
	scanf("%i",&nilai1);
	if(nilai1==1){
		barang();
	}
	else if(nilai1==2){
		Input();
	}
	else if(nilai1==3){
		banyak();
	}
	else if(nilai1==4){
		pembayaran();
	}
	else{
		printf("\n anda salah memasukan keyword");
	}
	main();
}
