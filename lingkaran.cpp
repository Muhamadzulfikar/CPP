#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main (){
	//tipe data
	float phi=3.14,r,d,keliling,luas;
	
	cout<<"program menghitung jari jari  lingkaran"<<endl;
	cout<<"by muhamad zulfikar"<<endl;
	cout<<"inputkan jari jari :   ";
	cin>>r;
	d=r+r;
	keliling=phi*d;
	luas=phi*pow(r,2);
	cout<<"hasil keliling jari jari lingkaran adalah "<<keliling<<endl;
	cout<<"hasil luas jari jari lingkaran adalah "<<luas<<endl;
	getch();	
	
}
