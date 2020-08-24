#include <iostream>

using namespace std;

double kali(double a, double b){
    return a * b;
}

int main(){
    double x, y, hasil;

    x = 4.5;
    y = 5.4;

    hasil = kali(x, y);

    printf("\n Hasil kali : %.2lf", hasil);

    cin.get();
    return 0;

}