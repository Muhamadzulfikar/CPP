#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	string nama;
	string nomor;
	long jumlah;
	char pilihan;
	
	cout<<"program transfer uang"<<endl;
	cout<<"inputkan nama nasabah : ";
	cin>>nama;
	cout<<"inputkan nomor rekening : ";
	cin>>nomor;
	cout<<"inputkan jumlah uang yang ingin di transfer : Rp. ";
	cin>>jumlah;
	cout<<"apakah anda yakin ingin mentransfer uang dengan jumlah Rp."<<jumlah<<endl;
	cout<<"kepada nasabah bernama "<<nama<<endl;
	cout<<"y||t"<<endl;
	cout<<"masukan pilihan anda : ";
	cin>>pilihan;
	if(pilihan=='y')
	cout<<"transaksi anda berhasil"<<endl;
	else
	cout<<"transaksi anda gagal"<<endl;
	getch();	
}
