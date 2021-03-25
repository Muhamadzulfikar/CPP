#include <stdio.h>

int tambah(int a, int b){
	
	int c = ( (a * 2) + (b * 2) );

}

int kurang(int a, int b){
	
	int c = ( (a * 2) - (b * 2) );

}

int kali(int a, int b){
	
	int c = ( (a * 2) * (b * 2) );

}

int main(){
	
	int d; //nilai A
	int e; //nilai B
	int f; //hasil
	int g; //switch
	
	printf("\n Program menghitung bilangan berpangkat");
	
	printf("\n\n Masukan nilai A:");
	scanf("%d", &d);
	
	printf("\n Masukan nilai B:");
	scanf("%d", &e);
	
	printf("\n 1. Penjumlahan");
	printf("\n 2. Pengurangan");
	printf("\n 3. Perkalian");
	
	printf("\n Pilih:");
	scanf("%d", &g);
	
	switch(g){
		
		case 1 :
			
		f = tambah(d, e);
	
		printf("\n Hasil A + B : %d", f);
		
		break;
		
		case 2 :
			
		f = kurang(d, e);
	
		printf("\n Hasil A - B : %d", f);
		
		break;
		
		case 3 :
			
		f = kali(d, e);
	
		printf("\n Hasil A * B : %d", f);
	}
	
	return 0;
}
