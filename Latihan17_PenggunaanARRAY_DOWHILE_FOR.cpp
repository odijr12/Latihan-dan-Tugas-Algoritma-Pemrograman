#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main() {
	cout<< setprecision(20);
	const int maxkaryawan =50;
	string namakaryawan [maxkaryawan];
	int jamkerja[maxkaryawan];
	float gajiperjam [maxkaryawan];
	float gajitotal [maxkaryawan];
	int jumlahkaryawan =0;
	char lagi;
		
		
	do{
		cout<<"masukkan nama karyawan ke- "<<jumlahkaryawan +1<<": ";
		cin>>namakaryawan[jumlahkaryawan];
		cout<<"masukkan jumlah jam kerja "<< namakaryawan[jumlahkaryawan]<<" : ";
		cin>> jamkerja [jumlahkaryawan];
		cout<<"masukkan gaji per jam untuk "<< namakaryawan[jumlahkaryawan]<< " : ";
		cin>> gajiperjam[jumlahkaryawan];
		
		
		gajitotal[jumlahkaryawan]=jamkerja[jumlahkaryawan]*gajiperjam[jumlahkaryawan];
		
		jumlahkaryawan++;
		
		cout<<"apakah anda ingin input data lagi? (Y/T): ";
		lagi=getch();
		cout<<endl;
		
	}while (lagi == 'y'||lagi=='Y');
	
	cout<<"\n==================================================================\n";
	
		cout<< setw(15)<< left<<"Nama"//left untuk memulai rata kiri
			<< setw(15)<<"jam kerja"
			<< setw(15)<<"gaji per jam"
			<< setw(15)<<"gaji total"<<endl;
		cout<<"=================================================================\n";
		
	for (int i=0; i< jumlahkaryawan;i++){
		cout <<setw(15) << left<< namakaryawan[i]
			 <<setw(15)<< jamkerja[i]
			 <<setw(15)<<gajiperjam[i]
			 <<setw(15)<<gajitotal[i]<<endl;
			 
			 
	}
	
	cout <<"====================================================================\n";
	
	return 0;
			
	
}
