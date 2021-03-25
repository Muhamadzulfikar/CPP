#include<stdio.h> //berfungsi untuk menampilkan fungsi printf
#include<conio.h> //berfungsi untuk menampilkan fungsi getch
#include<iostream>
using namespace std;
int main () { //berfungsi sebagai file utama dalam sebuah program
//tipe data
string nilai1; //tipe data yang digunakan untuk menampung bilangan bulat
string nilai2; //tipe data yang digunakan untuk menampung nilai karakter
string nilai3;
	printf("\n program biodata x tkj 1"); //berfungsi untuk menampilkan angka/huruf hasil output
	printf("\n nama : muhamad zulfikar");
	printf("\n kelas: x tkj 1");
	printf("\n umur : 15 tahun");
	cout<<endl;
	cout<<"tanggal lahir :";
	cin>>nilai1; //berfungsi untuk menampilkan fungsi int
	cout<<"alamat :";
	cin>>nilai2; //berfungsi untuk menampilkan fungsi char
	cout<<"nip : ";
	cin>>nilai3;
	
	return 0; //berfungsi menahan program agar tidak mudah keluar
}
