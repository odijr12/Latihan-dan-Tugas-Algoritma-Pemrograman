#include <iostream>      //Odi Junior Manalu
#include <iomanip>
#include <conio.h>
using namespace std;

int main (){
    cout<<setprecision(13);
    const int maksInput = 100;
    string namabarang[maksInput];
    float harga[maksInput],jumlahjual[maksInput],totalharga[maksInput],diskon[maksInput],totalbayar[maksInput];
    int totalpendapatan = 0;
    int barangKe = 0;
    
    char lagi;

        cout <<"PENJUALAN BARANG ELEKTRONIK" <<endl;
        cout <<"---------------------------" <<endl;

    do{
        cout << "Nama Barang ke- " <<barangKe + 1 <<": ";
        cin >> namabarang[barangKe];
        cout << "Harga " <<namabarang[barangKe] <<": ";
        cin >> harga[barangKe];
        cout << "Jumlah Jual " <<namabarang[barangKe] <<": ";
        cin >> jumlahjual[barangKe];
        totalharga[barangKe]  = harga[barangKe]  * jumlahjual[barangKe] ;
        diskon[barangKe]  = totalharga[barangKe] * 0.1;
        totalbayar[barangKe] = totalharga[barangKe]  - diskon[barangKe] ;
        totalpendapatan = totalpendapatan + totalbayar[barangKe];
        
        barangKe++;
        
        cout << "Apakah Ingin Input Lagi (Y/T) : ";
        lagi=getch();
        cout <<endl;
        
    } while (lagi == 'Y' || lagi == 'y');
    
        cout <<"\n=================================================================================\n";
        cout << setw(13) << left <<"Nama Barang"
             << setw(13) <<"Harga"
             << setw(13) <<"Jumlah Jual"
             << setw(13) <<"Total Harga"
             << setw(13) <<"Diskon"
             << setw(13) <<"Total Bayar" <<endl;
             
        cout <<"\n=================================================================================\n";
        for (int j=0; j < barangKe; j++){
        cout << setw(13) << left <<namabarang[j]	
             << setw(13) << harga[j]
        	 << setw(13) << jumlahjual[j]
        	 << setw(13) << totalharga[j]
        	 << setw(13) << diskon[j]
        	 << setw(13) << totalbayar[j] <<endl;
		}
		
		cout <<"\n=================================================================================\n";
		cout <<"                                                                 Total Pendapatan = " << totalpendapatan;
	    cout <<"\n=============================================================================================\n";
	  	return 0;		
}
