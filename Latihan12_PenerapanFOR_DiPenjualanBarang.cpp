#include<iostream>
#include<iomanip>

using namespace std;

int main (){
	int jumlahdata,jumlahbarang,totalpenjualan=0;
	
	cout<<"Masukkan Jumlah Data";
	cin>>jumlahdata;
	
	for (int i= 1;i<=jumlahdata;i++){
		cout<<"Masukkan Jumlah Barang Yang Terjual Di Toko "<<i<<": ";
		cin>>jumlahbarang;
		
		totalpenjualan += jumlahbarang; //cara singkat penggunaan rumus
		// cara panjang totalpenjualan = totalpenjualan+jumlah barang
	}
	cout<<"Total Barang Yang Terjual Di Toko Adalah : "<<totalpenjualan <<endl;
	return 0;
}
