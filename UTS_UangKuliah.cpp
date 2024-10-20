#include <iostream> //Odi Junior Manalu
#include <iomanip>
#include <conio.h>
using namespace std;
                     
int main() {
   
  const int maxMhs = 50;   
  string namaMhs[maxMhs],npm[maxMhs],kode[maxMhs],jrsan[maxMhs];                // UK ADALAH SINGKATAN UANG KULIAH
  float pbyrAwal[maxMhs],jmlhCicilan[maxMhs],bsrCicilan[maxMhs],bayaran[maxMhs],UK[maxMhs],UKterbayar[maxMhs],sisaUK[maxMhs];
  char lagi;
  int mhsKe = 0;
  int totalUK = 0;
  
  cout <<setprecision(13);
  cout << "                   PEMBAYARAN UANG KULIAH" <<endl;
  cout << "=============================================================" <<endl;
  
   do {
        cout << "Mahasiswa Ke-" << mhsKe + 1 << endl;
        cout << "Nama Mahasiswa            : ";
        cin >> namaMhs[mhsKe]; 
        cout << "NPM                       : ";
		cin >> npm[mhsKe]; 
        cout << "Kode                      : ";
        cin >> kode[mhsKe];
        
        
        if (kode[mhsKe]        == "SI") {
            jrsan[mhsKe]       = "Sistem Informasi";
            pbyrAwal[mhsKe]    = 2100000;
            jmlhCicilan[mhsKe] = 7;
            bsrCicilan[mhsKe]  = 300000;
        }
		else if (kode[mhsKe]   == "TI") {
            jrsan[mhsKe]       = "Teknik Informatika";
            pbyrAwal[mhsKe]    = 2500000;
            jmlhCicilan[mhsKe] = 6;
            bsrCicilan[mhsKe]  = 350000;
        } 
		else if (kode[mhsKe]   == "KA") {
            jrsan[mhsKe]       = "Komputer Akuntansi";
            pbyrAwal[mhsKe]    = 1750000;
            jmlhCicilan[mhsKe] = 6;
            bsrCicilan[mhsKe]  = 200000;
        } 
		else if (kode[mhsKe]   == "MI") {
            jrsan[mhsKe]       = "Manajemen Informatika";
            pbyrAwal[mhsKe]    = 1500000;
            jmlhCicilan[mhsKe] = 6;
            bsrCicilan[mhsKe]  = 250000;
        }
        
        cout << "Jurusan                   : " <<jrsan[mhsKe] <<endl;
        cout << "Pembayaran Awal           : Rp " <<pbyrAwal[mhsKe] <<endl;
        cout << "Jumlah Cicilan            : " <<jmlhCicilan[mhsKe] <<endl;
        cout << "Besar Cicilan             : Rp " <<bsrCicilan[mhsKe] <<endl;
        cout << "Pembayaran Ke             : ";
        cin >> bayaran[mhsKe];
        
          
        UK[mhsKe] = pbyrAwal[mhsKe] + (jmlhCicilan[mhsKe] * bsrCicilan[mhsKe]);
        UKterbayar[mhsKe] = pbyrAwal[mhsKe] + (bayaran[mhsKe] * bsrCicilan[mhsKe]);
        sisaUK[mhsKe] = UK[mhsKe] - UKterbayar[mhsKe];
        totalUK = totalUK + sisaUK[mhsKe];
        
        cout << "Uang Kuliah               : Rp " <<UK[mhsKe] <<endl;
        cout << "Uang Kuliah Terbayar      : Rp " <<UKterbayar[mhsKe] <<endl;
        cout << "Sisa Uang Kuliah          : Rp " <<sisaUK[mhsKe] <<endl;
        
        cout << "-------------------------------------------------------------"<<endl;
        
        mhsKe++;
        lagi = getch();
        cout <<endl;
        
    }while (lagi == 'Y' || lagi == 'y');
    
    cout << "==================================================================================================================================================" << endl;
    cout <<endl;
	cout << "                                                 LAPORAN PEMBAYARAN UANG KULIAH MAHASISWA" <<endl;
    cout <<endl;
    cout << "==================================================================================================================================================" << endl;
    cout <<endl;
    cout << setw(1) <<left <<""		    
         << setw(10) <<"Nama"      
         << setw(15) <<"NPM"
         << setw(25) <<"Jurusan"         
         << setw(15) <<"Awal Bayaran"        
         << setw(16) <<"Besar Cicilan"
         << setw(16) <<"Pembayaran ke"
         << setw(12) <<"Terbayar"
		 << setw(20) <<"Total Uang Kuliah"
		 << setw(20) <<"Sisa Bayaran"
		 << endl;  
		 
    cout << "--------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	for(int i = 0; i < mhsKe; i++){
	cout << setw(1) <<left <<""	     
	     << setw(10) <<namaMhs[i]
	     << setw(15) <<npm[i]
	     << setw(25) <<jrsan[i]	     
	     << setw(15) <<pbyrAwal[i]
	     << setw(16) <<bsrCicilan[i]
	     << setw(16) <<bayaran[i]
	     << setw(12) <<UKterbayar[i]
	     << setw(20) <<UK[i]
	     << setw(20) <<sisaUK[i]
	     << endl;
	}   
    cout << "--------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                                                                   Total Sisa Uang Kuliah Yang Harus Di Bayar Seluruh Mahasiswa = " <<totalUK <<endl;

 return 0;
}
