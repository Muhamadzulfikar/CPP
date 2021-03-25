#include <stdio.h>
#include <math.h>
int main ()
{
	float nilai1;
	float nilai2;
	float a;
	float b;
	float c;
	float nilai;
	
	printf("\n program phytagoras");
	printf("\n                  / |");
	printf("\n             C  /   |");
	printf("\n               /    | A");
	printf("\n              /     |");
	printf("\n            /_______|");
	printf("\n               B ");

	
	printf("\n masukan nilai 1 (a/b) :");
	scanf("%f",&nilai1);
	printf("\n masukan nilai 2 (b/c) :");
	scanf("%f",&nilai2);
	a=sqrt(pow(nilai2,2)-pow(nilai1,2));
	b=sqrt(pow(nilai2,2)-pow(nilai1,2));
	c=sqrt(pow(nilai2,2)+pow(nilai1,2));
	printf("\n pilihan 1 mencari a");
	printf("\n pilihan 2 mencari b");
	printf("\n pilihan 3 mencari c");
	printf("\n masukan pilihan anda :");
	scanf("%f",&nilai);
	if(nilai==1)
	printf("\n hasilnya adalah %f",a);
	if(nilai==2)
	printf("\n hasilnya adalah %f",b);
	if(nilai==3)
	printf("\n hasilnya adalah %f",c);
	return 0;
}
