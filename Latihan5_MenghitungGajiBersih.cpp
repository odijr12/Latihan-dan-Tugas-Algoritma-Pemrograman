#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	
	float gaji,pajak,pinjaman,gajibersih;
	char nama[30], jabatan [30];
	
	 cout<<"GAJI KARYAWAN STMIK PENUSA" <<endl;
	 cout<<"Nama Pegawai : ";
	 cin>>nama;
	 cout<<"Jabatan : ";
	 cin>>jabatan;
	 cout<<setprecision(13);
	 cout<<"Gaji : ";
	 cin>>gaji;
	 
	 pajak = 0.5*gaji;	
	 cout<<"Pajak : " <<pajak <<endl;
	 cout<<"Pinjaman : ";
	 cin>>pinjaman;
	 
	 gajibersih = gaji - (pinjaman+pajak);
	 cout<<"Gaji Bersih : " <<gajibersih <<endl;
	 
     return 0 ;

	 
}
