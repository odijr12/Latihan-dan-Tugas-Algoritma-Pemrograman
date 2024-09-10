//odi junior manalu
#include <iostream>
using namespace std;

int main() {
float harga,jumlahjual,totalharga,diskon,totalbayar;
char namabarang[30] ;

cout<< "PENJUALAN BARANG ELEKTRONIK" <<endl;
cout<< "Nama Barang :";
cin>> namabarang;
cout<< "Harga :";
cin>> harga;
cout<<"Jumlah Jual :";
cin>>jumlahjual;
totalharga = harga * jumlahjual;
diskon = totalharga * 0.10;
totalbayar = totalharga - diskon;
cout<< "Total Harga :" <<totalharga <<endl;
cout<< "Diskon :" <<diskon <<endl;
cout<< "Total Bayar :" <<totalbayar <<endl;
return 0;
}
