/*

	nama file : latihan6
	pemogram : Muhamad Zulfikar
	Tanggal : 23 mei 2021
	Deskripsi : Program menampilkan array 3 dengan perulangan
	
*/

#include <iostream>
using namespace std;

int main(){
	//deklarasi dan inisialisasi array 2 dimensi
	int a [2][5][2] = {    { {1,2}, {2,3}, {3,4}, {4,5}, {5,6} },  { {7,8}, {8,9}, {10,11}, {12,13}, {14,15} }  };
	
	for(int i=0; i<2; i++){
		for(int j=0; j<5; j++){
			for(int k=0; k<2; k++){
				cout<<a[i][j][k]<<endl;
			}
		}
	}
	
	system("pause");
	
	return 0;
}
