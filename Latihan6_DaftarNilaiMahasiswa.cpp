#include <iostream>
#include <iomanip>
using namespace std;

int main() {
float nhadir,ntugas,nuts,nuas,nakhir;
char namamhs[30],nim[10],nhuruf;

cout<< "DAFTAR NILAI MAHASISWA" <<endl;
cout<< "----------------------" <<endl;
cout<< "Nama Mahasiswa :";
gets(namamhs);
cout<< "NIM :";
gets(nim);
cout<< "Nilai Hadir :";
cin>>nhadir;
cout<< "Nilai Tugas :";
cin>>ntugas;
cout<< "Nilai UTS :";
cin>>nuts;
cout<< "Nilai UAS :";
cin>>nuas;
nakhir=(0.1*nhadir)+(0.15*ntugas)+(0.35*nuts)+(0.4*nuas);
if(nakhir>=85 && nakhir<100) {
	nhuruf='A'; //Jika Begini maka ini adalah if tunggal
}else if(nakhir>=70 && nakhir<85){
    nhuruf='B'; //Jika ditambah else maka adalah if jamak
               // && adalah dan/and
               
}else if (nakhir>=60 && nakhir<70){
    nhuruf='C';
}else if (nakhir>=50 && nakhir<60){
    nhuruf='D';
}else if (nakhir>=0 && nakhir<50){
    nhuruf='E';
}else {
	nhuruf='-';
}

cout<< "Nilai Akhir =" <<nakhir<<endl;
cout<< "Nilai Huruf =" <<nhuruf<<endl;
    
return 0;
}
