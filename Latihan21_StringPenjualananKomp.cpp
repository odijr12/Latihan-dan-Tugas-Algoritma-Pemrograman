#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char kd[3];
	char nama[20]="";
	float harga=0;
	int jml,hasil = 0;
	cout << setprecision(15);
	cout << "           Penjualan Komputer STMIK PENUSA\n";
	cout << "---------------------------------------------------------\n";
	cout << "Input Kode : ";
	cin >> kd;
	
	hasil = strcmp(kd, "PII");               // strcmp = string compare = membandingkan String
	if (hasil == 0){                         // strcpy = string copy    = Menambah dan Mengcopy string
		strcpy(nama,"Komp PENTIUM II");
		harga = 1500000;
	}
	hasil = strcmp(kd, "PIII");               
	if (hasil == 0){                         
		strcpy(nama,"Komp PENTIUM III");
		harga = 2500000;
	}
	hasil = strcmp(kd, "PIV");               
	if (hasil == 0){                         
		strcpy(nama,"Komp PENTIUM IV");
		harga = 3500000;
	}
    
    cout << "Nama        : " <<nama <<endl;
    cout << "Harga       : " <<setw(9) <<harga <<endl;
    cout << "Jumlah Jual : " ;
    cin >> jml;
    
    long tharga =jml * harga;
    cout << "Total Harga : " <<setw(9) <<tharga <<endl;
    cout << "---------------------------------------------------------\n";
    
	return 0;
}
