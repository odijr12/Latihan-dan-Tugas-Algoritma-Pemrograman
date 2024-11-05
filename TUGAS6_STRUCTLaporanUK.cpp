#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <iomanip>

using namespace std;

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

struct data_ujian{
	int npm;
	char nama[20];
	float nilai_mid,nilai_semester,nilai_akhir;
	char nilai_huruf;
	
}Mhs[100];
//Odi Junior Manalu
int main(){
	
	char lgi = 'Y';
	int m = 0;
	data_ujian dt_ujian;

while(lgi == 'Y' || lgi == 'y'){
	system("cls");
	cout <<setprecision(2);
	cout << "      Data Nilai Ujian Pemrograman C++\n";
	cout << "      Dosen          : Budiman,S.Si\n";
	cout << "--------------------------------------------------\n";
	m++;
	cout << "NPM             : ";
	cin >> Mhs[m].npm;
	cout << "Nama            : ";
	cin >> Mhs[m].nama;
	cout << "Nilai Mid       : ";
	cin >> Mhs[m].nilai_mid;
	cout << "Nilai Semester  : ";
	cin >> Mhs[m].nilai_semester;
	
	Mhs[m].nilai_akhir = (0.4 * Mhs[m].nilai_mid) + (0.6 * Mhs[m].nilai_semester);
	if (Mhs[m].nilai_akhir >= 80 && Mhs[m].nilai_akhir <= 100){
	    Mhs[m].nilai_huruf = 'A';
	}
	else if(Mhs[m].nilai_akhir >= 70 && Mhs[m].nilai_akhir < 80){
		Mhs[m].nilai_huruf = 'B';		
	}
	else if(Mhs[m].nilai_akhir >= 55 && Mhs[m].nilai_akhir < 70){
		Mhs[m].nilai_huruf = 'C';
	}
	else if(Mhs[m].nilai_akhir >= 40 && Mhs[m].nilai_akhir < 55){
		Mhs[m].nilai_huruf = 'D';
	}
	else if(Mhs[m].nilai_akhir >= 0 && Mhs[m].nilai_akhir < 40){
		Mhs[m].nilai_huruf = 'E';
	}
	
	cout << "Nilai Akhir     : " <<Mhs[m].nilai_akhir <<endl;
	cout << "Nilai Huruf     : " <<Mhs[m].nilai_huruf <<endl;
	cout << "--------------------------------------------------\n";
	cout << "Input Lagi[Y/T] : ";
	lgi = getch();
	system ("cls");	
}
	
	cout << "-----------------------------------------------------------------------------------------\n";
	cout << "                           LAPORAN NILAI UJIAN PEMROGRAMAN C++\n";
	cout << "-----------------------------------------------------------------------------------------\n";
	cout << " No   NPM       Nama         Nilai Mid    Nilai Semester    Nilai Akhir    Nilai Huruf\n";
	cout << "-----------------------------------------------------------------------------------------\n";
	
	for(int i = 1; i <=m ; i++){
	gotoxy(1 ,5+i) ; cout << i;
	gotoxy(5 ,5+i) ; cout << Mhs[i].npm;
	gotoxy(16,5+i) ; cout << Mhs[i].nama;
	gotoxy(32,5+i) ; cout << Mhs[i].nilai_mid;
	gotoxy(47,5+i) ; cout << Mhs[i].nilai_semester;
	gotoxy(64,5+i) ; cout << Mhs[i].nilai_akhir;
	gotoxy(80,5+i) ; cout << Mhs[i].nilai_huruf; 
	cout <<endl;
		
	}
	cout << "-----------------------------------------------------------------------------------------\n";	
	return 0;
}
