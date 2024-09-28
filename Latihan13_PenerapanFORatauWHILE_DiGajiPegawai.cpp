#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	
	float gaji,pajak,pinjaman,gajibersih;
	char nama[25],jabatan[20];

cout<<"GAJI KARYAWAN STMIK PENUSA"<<endl;
cout<<"---------------------------"<<endl;

for(int i=1; i<=10; i++){

cout<<"Pegawai " << i <<" : " ;
cin>>nama;
cout<<"Jabatan : ";
cin>>jabatan;
cout<<setprecision(13);
cout<<"Gaji : ";
cin>>gaji;

pajak=gaji*0.15;
cout<<"Pajak : "<<pajak <<endl;
cout<<"Pinjaman : ";
cin>>pinjaman;

gajibersih = gaji - (pinjaman+pajak) ;

cout<<"Gaji Bersih : "<< gajibersih<<endl;
cout<<endl; 
}

return 0;

}
