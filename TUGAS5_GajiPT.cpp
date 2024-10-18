#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main(){
	const int maxpgw = 50;
	string namapgw[maxpgw],gol[maxpgw],kode[maxpgw],jbtn[maxpgw];
	float gaji[maxpgw],tunjangan[maxpgw],pinjaman[maxpgw],pajak[maxpgw],gjkotor[maxpgw],gjbersih[maxpgw];
    char lagi;
    int pgwke = 0;
    int totalgaji = 0;
    cout << setprecision(20);
    cout << "         GAJI PEGAWAI PT.TELKOM" <<endl;
    cout << "----------------------------------------" <<endl;
    
    do{
    	cout << "Pegawai Ke " <<pgwke + 1 <<endl;
    	cout << "Nama Pegawai       : ";
    	cin >> namapgw[pgwke];
    	cout << "Golongan           : ";
    	cin >> gol[pgwke];
    	cout << "Kode Jabatan       : ";
    	cin >> kode[pgwke];
    
    if(gol[pgwke] =="Ia"){
       gaji[pgwke] = 500000;
	}	
    else if(gol[pgwke] =="IIa"){
       gaji[pgwke] = 750000;
	}
    else if(gol[pgwke] =="IIIa"){
       gaji[pgwke] = 1000000;
	}
	else if(gol[pgwke] =="Ib"){
       gaji[pgwke] = 1500000;
	}
	else if(gol[pgwke] =="IIb"){
       gaji[pgwke] = 1750000;
	}
	else if(gol[pgwke] =="IIIb"){
       gaji[pgwke] = 2500000;
	}
	else{	
	  gaji[pgwke] = 0;
    }
    if(kode[pgwke] =="Dir"){
    	jbtn[pgwke] ="Direktur";
    	tunjangan[pgwke] = 450000;
	}
	else if(kode[pgwke] =="Wak"){
    	jbtn[pgwke] ="Wakil Direktur";
    	tunjangan[pgwke] = 375000;
    }
    else if(kode[pgwke] =="Sek"){
    	jbtn[pgwke] ="Sekretaris";
    	tunjangan[pgwke] = 300000;
    }
    else if(kode[pgwke] =="Stf"){
    	jbtn[pgwke] ="Staff Administrasi";
    	tunjangan[pgwke] = 200000;
    }
    else{
    	jbtn[pgwke] ="-";
    	tunjangan[pgwke] = 0;
	}
    
    pajak[pgwke] = gaji[pgwke] * 0.5;
    gjkotor[pgwke] = gaji[pgwke] + tunjangan[pgwke];
    gjbersih[pgwke] = gjkotor[pgwke] - pinjaman[pgwke] - pajak[pgwke];
    totalgaji = totalgaji + gjbersih[pgwke];
    
    
    cout << "Jabatan            : " <<jbtn[pgwke] <<endl;
    cout << "Gaji               : " <<gaji[pgwke] <<endl;
    cout << "Tunjangan          : " <<tunjangan[pgwke] <<endl;
    cout << "Pinjaman           : ";
    cin >> pinjaman[pgwke];
    cout << "Pajak              : " <<pajak[pgwke] <<endl;
    cout << "Total Gaji Kotor   : " <<gjkotor[pgwke] <<endl;
    cout << "Total Gaji Bersih  : " <<gjbersih[pgwke] <<endl;
    
    cout << "----------------------------------------"<<endl;
  
    pgwke++;
    lagi = getch ();
    cout <<endl;
}while (lagi == 'Y' || lagi == 'y');

    cout <<"\n==============================================================================\n";
    cout << setw(2) <<left <<""
         << setw(15) <<"Nama Pegawai"
         << setw(20) <<"Jabatan"
         << setw(15) <<"Gaji"
         << setw(15) <<"Gaji Kotor"
         << setw(15) <<"Gaji Bersih"
         << endl;
         
	cout <<"\n==============================================================================\n";
	for(int k = 0; k < pgwke; k++){
	cout << setw(2) << left <<""
	     << setw(15) <<namapgw[k]
	     << setw(20) <<jbtn[k]
	     << setw(15) <<gaji[k]
	     << setw(15) <<gjkotor[k]
	     << setw(15) <<gjbersih[k]
		 << endl;	
	}
    cout <<"\n===============================================================================\n";
    cout <<"                                       Total Seluruh Gaji Bersih = " <<totalgaji;

  return 0;
}

