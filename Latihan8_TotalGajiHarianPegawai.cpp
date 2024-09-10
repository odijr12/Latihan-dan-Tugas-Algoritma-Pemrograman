#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	char namapegawai[30];
	float gajiperjam=500,jjamkerja,lembur,totalgaji;
	cout<< "MENGHITUNG GAJI PEGAWAI" <<endl;
	cout<< "-----------------------" <<endl;
	cout<< "Nama Pegawai :";
	gets(namapegawai);
	cout<< "Jumlah Jam Kerja :";
	cin>>jjamkerja;
	if(jjamkerja>7){
	  lembur=(1.5*gajiperjam*(jjamkerja-7));
	  totalgaji=(7*gajiperjam)+lembur;

	}else {
     lembur=0;
     totalgaji=(jjamkerja*gajiperjam)+lembur;
	}

    cout<<" Total Gaji Harian Pegawai =" <<totalgaji<<endl;
    return 0;

}

