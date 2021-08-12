#include <iostream>
#include "listExplicit.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printseluruhisilist(listexplicit i){
	//tampilkan data buku di dalam stack
	cout<<"isi list : ";
	listelement* currentelement = i.first;
	while(currentelement!=NULL){
		cout<<" ["<<currentelement -> info<<"]";
		currentelement = currentelement -> next; 
	}
	cout<<endl;
}

void masukandatasebagaielemenpertamaList(listexplicit& i){
	cout<<"Masukan angka : ";
	int n;
	cin >> n;
	insertfirst (i, n);
}

int main(int argc, char** argv) {
	
	listexplicit i;
	createempty(i);
	bool stop = false;
	
	while(!stop){
		printseluruhisilist(i);
		
		cout<<"Menu : "<<endl;
		cout<<"1. Masukan data sebagai element Pertama"<<endl;
		cout<<"Selain itu keluar"<<endl;
		
		cout<<"Pilihan anda :";
		char jawaban;
		cin>>jawaban;
		
		if(jawaban == '1'){
			masukandatasebagaielemenpertamaList(i);
		}
		stop = (jawaban != 1);
	}
	
	system("pause");
	return 0;
}
