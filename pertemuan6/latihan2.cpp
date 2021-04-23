/*

	nama file : latihan1
	pemogram : Muhamad Zulfikar
	Tanggal : 23 mei 2021
	Deskripsi : Program menampilkan array 1 dimensi
	
*/

#include <iostream>
using namespace std;

int main(){
	//deklarasi array 1 dimensi
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	
	//menampilkan array
	for(int i=0; i<10; i++){
		cout<<"array ke "<<i<<" "<<a[i]<<endl;
	}
	
	system("pause");
	
	return 0;
}
