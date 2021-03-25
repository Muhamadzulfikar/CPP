#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	//tipe data
	int hari,jam,menit,detik;
	
	cout<<"program konversi waktu"<<endl;
	cout<<"masukan hari : ";
	cin>>hari;
	jam = hari*24;
	menit = jam*60;
	detik =menit *60;
	cout<<"jam : "<<jam<<" jam"<<endl;
	cout<<"menit : "<<menit<<" menit"<<endl;
	cout<<"detik : "<<detik<<" detik"<<endl;
	getch();
}
