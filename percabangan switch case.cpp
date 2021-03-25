#include <iostream>
using namespace std;
int main(){
	char nilai;
	cout<<"pilih jurusanmu: \na. automotive\nb. tkj\nc.kbb\n";
	cout<<"masukan pilihan anda : ";
	cin>>nilai;
	switch (nilai){
		case'a':
		cout<<"anda memilih automotive";
		break;
		case'b':
		cout<<"anda memilih tkj";
		break;
		case'c':
		cout<<"anda memilih kbb";
		break;
		default:
			cout<<"anda salah memasukan pilihan";
			break;
		
	}
	return 0;
	
}
