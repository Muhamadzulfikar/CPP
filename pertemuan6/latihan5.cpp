/*

	nama file : latihan5
	pemogram : Muhamad Zulfikar
	Tanggal : 23 mei 2021
	Deskripsi : Program menampilkan array 3
	
*/

#include <iostream>
using namespace std;

int main(){
	//deklarasi dan inisialisasi array 2 dimensi
	int a [2][5][3] = {    {  {1,2}, {2,3}, {3,4}, {4,5}, {5,6}  },  {  {7,8}, {8,9}, {10,11}, {12,13}, {14,15}  }  };
	
	cout<<a[1][1][1]<<endl;
	
	system("pause");
	
	return 0;
}
