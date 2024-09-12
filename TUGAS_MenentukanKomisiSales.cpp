//Odi Junior Manalu
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char namasales[30];
    float jmlhpenjualan, komisi = 0.0;

    cout<<"Nama Sales : ";    
    gets(namasales);
    cout<<"Jumlah Penjualan : ";
    cin>>jmlhpenjualan;

    cout<<setprecision(10000000);
    if (jmlhpenjualan <500000) {
        komisi = 0.0;
    } else {
        komisi = 500000*0.10; 
        komisi += (jmlhpenjualan - 500000)*0.15;
    }
   
    cout<<"Komisi Salesman Sebesar: " <<komisi<<endl;

    return 0;
}
