#include <iostream>
using namespace std;

void biodata(){
	cout<<"nama : muhamad zulfikar"<<endl;
	cout<<"tempat/tanggal lahir : tanjungbalai karimun/19-01-2002"<<endl;
	cout<<"kelas/nama sekolah : x tkj1/SMKN 1 KARIMUN"<<endl;
	cout<<"alamat : jln. teluk air"<<endl;
	cout<<"agama : islam"<<endl;
	cout<<"provinsi: kepulauan riau"<<endl;
	cout<<endl;
}

void pekerjaan(){
	cout<<"pekerjaan : siswa"<<endl;
	cout<<"skil : programing c++,microsoft word,exel,powerpoint,desain grafis"<<endl;
	cout<<endl;
}

void algoritma(){
	/* selesaikan algoritma dibawah ini dalam bentuk coding c++
	seorang anak bernama amir ingin mengelompokan handphone dengan kriteria sebagai berikut :
	jika merek handphone a : apple,asus
	jika merek handphone s: samsung
	jika merek handhone x : xiaomi
	*/
	char handphone;
	
	cout<<"program mengelompokan merek handphone handphone "<<endl;
	cout<<"inputkan inisial nama handphone : ";
	cin>>handphone;
	if(handphone=='a'){
		cout<<"merek handpone a adalah apple,asus"<<endl;
	}
	else if(handphone=='s'){
		cout<<"merek handphone s adalah samsung"<<endl;
	}
	else if(handphone=='x'){
		cout<<"merek handphone x adalah xiaomi"<<endl;
	}
	else{
		cout<<"keyword yang anda masukan mungkin salah periksa kembali keyword anda"<<endl;
	}
}
int main(){
	cout<<"biodata :"<<endl;
	cout<<endl;
	biodata();
	cout<<"pekerjaan :"<<endl;
	cout<<endl;
	pekerjaan();
	cout<<"merek handphone :"<<endl;
	cout<<endl;
	algoritma();
	return 0;
}

