/*

	nama file : latihan3
	pemogram : Muhamad Zulfikar
	Tanggal : 23 mei 2021
	Deskripsi : Program menampilkan array 2 dimensi
	
*/

#include <iostream>
using namespace std;

int main(){
	//deklarasi dan inisialisasi array 2 dimensi
	int a[3][2] = {{5,8}, {11,12}, {20,25}};
	
	cout<<"isi array ke [0,0] :"<<a[0][0]<<endl;
	cout<<"isi array ke [0,1] :"<<a[0][1]<<endl;
	cout<<"isi array ke [1,0] :"<<a[1][0]<<endl;
	cout<<"isi array ke [1,1] :"<<a[1][1]<<endl;
	cout<<"isi array ke [2,0] :"<<a[2][0]<<endl;
	cout<<"isi array ke [2,1] :"<<a[2][1]<<endl;
	
	system("pause");
	
	return 0;
}
