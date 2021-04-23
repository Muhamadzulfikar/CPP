/*

	nama file : latihan4
	pemogram : Muhamad Zulfikar
	Tanggal : 23 mei 2021
	Deskripsi : Program menampilkan array 2 dimensi dengan perulangan
	
*/

#include <iostream>
using namespace std;

int main(){
	//deklarasi dan inisialisasi array 2 dimensi
	int a[3][2] = {{5,8}, {11,12}, {20,25}};
	
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cout<<a[i][j]<<" "<<endl;
		}
	}
	
	system("pause");
	
	return 0;
}
