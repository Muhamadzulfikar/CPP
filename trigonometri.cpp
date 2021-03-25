#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	float datar,miring,tegak;
	float sin,cos,tan,cosec,sec,cot;
	int nilai1;
	
	cout<<"program trigonometri "<<endl;
	cout<<"masukan sisi datar : ";
	cin>>datar;
	cout<<"masukan sisi tegak : ";
	cin>>tegak;
	cout<<"masukan sisi miring : ";
	cin>>miring;
	sin = tegak/miring;
	cos = datar/miring;
	tan = tegak/datar;
	cosec = miring/tegak;
	sec = miring/datar;
	cot = datar/tegak;
	cout<<"1.sin"<<endl;
	cout<<"2.cos"<<endl;
	cout<<"3.tan"<<endl;
	cout<<"4.cosec"<<endl;
	cout<<"5.sec"<<endl;
	cout<<"masukan pilihan anda : ";
	cin>>nilai1;
	if(nilai1==1)
	cout<<tegak<<"/"<<miring<<sin<<endl;
	if(nilai1==2)
	cout<<datar<<"/"<<miring<<cos<<endl;
	if(nilai1==3)
	cout<<tegak<<"/"<<datar<<tan<<endl;
	if(nilai1==4)
	cout<<miring<<"/"<<tegak<<cosec<<endl;
	if(nilai1==5)
	cout<<miring<<"/"<<datar<<sec<<endl;
	getch();
	
	
}
