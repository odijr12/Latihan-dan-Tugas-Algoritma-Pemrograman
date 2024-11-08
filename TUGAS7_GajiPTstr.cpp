#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;


int main(){
	
	char namapgw[20],gol[4],kd[4],jbtn[20];
	float gaji,tunjangan,pinjaman,pajak,gjkotor,gjbersih=0;
    char lagi;
    int pgwke = 0;
    int hasil = 0;
    
    cout << setprecision(15);
    cout << "         GAJI PEGAWAI PT.TELKOM" <<endl;
    cout << "----------------------------------------" <<endl;
    
    do{
    	system ("cls");
    	
    	cout << "Pegawai Ke " <<pgwke + 1 <<endl;
    	cout << "Nama Pegawai       : ";
    	cin  >> namapgw;
    	cout << "Golongan           : ";
    	cin  >> gol;
    	cout << "Kode Jabatan       : ";
    	cin  >> kd;
    // Odi Junior Manalu
    hasil = strcmp(gol, "Ia");
    if (hasil == 0){
    	gaji = 500000;
	}
     hasil = strcmp(gol, "IIa");
    if (hasil == 0){
    	gaji = 750000;
	}
     hasil = strcmp(gol, "IIIa");
    if (hasil == 0){
    	gaji = 1000000;
	}
     hasil = strcmp(gol, "Ib");
    if (hasil == 0){
    	gaji = 1500000;
	}
     hasil = strcmp(gol, "IIb");
    if (hasil == 0){
    	gaji = 1750000;
	}
     hasil = strcmp(gol, "IIIb");
    if (hasil == 0){
    	gaji = 2500000;
	}
    
     hasil = strcmp(kd, "Dir");
    if (hasil == 0){
    	strcpy(jbtn, "Direktur");
		tunjangan = 450000;
	}
	 hasil = strcmp(kd, "Wak");
    if (hasil == 0){
    	strcpy(jbtn, "Wakil Direktur");
		tunjangan = 375000;
	}
	 hasil = strcmp(kd, "Sek");
    if (hasil == 0){
    	strcpy(jbtn, "Sekretaris");
		tunjangan = 300000;
	}
     hasil = strcmp(kd, "Stf");
    if (hasil == 0){
    	strcpy(jbtn, "Staff Administrasi");
		tunjangan = 200000;
	}
	
	
	
    cout << "Jabatan            : " <<jbtn <<endl;
    cout << "Gaji               : " <<gaji <<endl;
    cout << "Tunjangan          : " <<tunjangan <<endl;
    cout << "Pinjaman           : ";
    cin >> pinjaman;
    
    pajak = 0.05 * gaji;
    cout << "Pajak              : " <<pajak <<endl;
    
    gjkotor = gaji - tunjangan;
    cout << "Total Gaji Kotor   : " <<gjkotor <<endl;
    
    gjbersih = gjkotor - pinjaman - pajak;
    cout << "Total Gaji Bersih  : " <<gjbersih <<endl;
    
    cout <<endl;
    cout << "--------------------------------------------"<<endl;
    cout << "   Masih Ingin Menghitung Gaji lagi[Y/T]" <<endl;
   
    pgwke++;
    lagi = getch ();
   
}while (lagi == 'Y' || lagi == 'y');

   system("cls");
  return 0;
}

