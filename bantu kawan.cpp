#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a,b,c,nilaiterbesar;
	
	cout<<"program menghitung nilai terbesar dari 3 bilangan"<<endl;
	cout<<"masukan nilai a : ";
	cin>>a;
	cout<<"masukan nilai b : ";
	cin>>b;
	cout<<"masukan nilai c :";
	cin>>c;

	if ((a>b) && (a>c)){
	cout<<"nilai terbesar adalah : a"<<endl;
}
	else if ((b>a) && (b>c)){
	cout<<"nilai terbesar adalah : b"<<endl;
}
	else if((c>a) && (c>b)){
	cout<<"nilai terbesar adalah : c"<<endl;
}
	getch();
}
