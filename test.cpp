#include <iostream>
#include <conio.h>
using namespace std;
void percobaan(){
	string nama;
	char pilih;
	cout<<"program berhadiah"<<endl;
	cout<<"masukan nama anda : ";
	cin>>nama;
	cout<<nama<<", selamat anda mendapatkan hadiah 10 juta "<<endl;
	cout<<"apakah anda ingin mengambilnya"<<endl;
	cout<<"y||t"<<endl;
	cout<<"masukan piihan anda : ";
	cin>>pilih;
	if(pilih=='y'){
	cout<<"selamat 10 juta rupiah !!!"<<endl;
	}
	else {
		cout<<"rugi sekali anda jika tidak mengambilnya"<<endl;
	}

}
int main(){
	percobaan();
	getch();
}

