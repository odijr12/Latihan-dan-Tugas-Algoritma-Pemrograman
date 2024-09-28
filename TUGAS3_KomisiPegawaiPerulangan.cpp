#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char namapegawai[30];
    float jmlhpenjualan,komisi,totalkomisi = 0;

    cout<<"PT MURAH HATI"<<endl;
    
	for (int i = 0; i < 10; i++){
	
	cout<<"Nama Pegawai  "  << i + 1 << " : " ;
    cin>>namapegawai;
    cout<<"Jumlah Penjualan : ";
    cin>>jmlhpenjualan;

    cout<<setprecision(13);
    if (jmlhpenjualan <500000) {
        komisi = 0.0;
    } else
	{
        komisi = 500000*0.10; 
        komisi += (jmlhpenjualan - 500000)*0.15;    	   
	}
    
    cout<<"Bonus Komisi Pegawai " << i + 1<< " : " << komisi << endl;
        
        totalkomisi += komisi; 
    }
 
    cout << "Total Komisi yang Harus di Bayar oleh Perusahaan: " << totalkomisi << endl;
    return 0;
}
