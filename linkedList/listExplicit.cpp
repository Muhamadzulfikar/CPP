#include <iostream>
#include "listExplicit.h"

void createempty(listexplicit& i){
	i.first = NULL;
}

void insertfirst(listexplicit& i, listelement* inputelement){
	//kondisi awal: l  bisa kosong (artinya l.first = NULL) atau tidak kosong (artinya l.first berisi sebuah pointer ke sebuah listelement)
	
	//tahap 1 : memindahkan seluruh isi list sebagai element sesudah input
	
	inputelement -> next = i.first;
	
	//tahap 2 : mengubah agar l.first menunjuk ke imput
	i.first = inputelement;
}
	
	void insertfirst(listexplicit& i, int inputinteger){
		//membuat element baru dengan parameter input sebagai isi field info
		listelement* le = new listelement;
		le -> info = inputinteger;
		le -> next = NULL;
		
		//memasukan element yang telah dibuat ke dalam list
		insertfirst(i, le);
	}
