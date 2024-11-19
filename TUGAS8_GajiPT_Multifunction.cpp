#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;

float gaji_pokok(float gajiPerJam, int jam_kerja);
int uang_lembur(int jam_kerja);
float uang_makan(int jam_kerja);
int jasa_lembur(int jam_kerja);

const float gaji_per_jam = 2000; 
const int uang_lembur_per_jam = 3000; 

int main() {
    char lagi; 

    do {
        string nama;
        int jam_kerja;

        cout << "\nPT REJEKI NOMPLOK" << endl;
        cout << "-----------------------------------------------" << endl;
        
        cout << "Nama             : ";
        cin >> nama;
        cout << "Jumlah Jam Kerja : ";
        cin >> jam_kerja;

        cout << endl;
        
        float gajipk = gaji_pokok(gaji_per_jam, jam_kerja);
        int lembur = uang_lembur(jam_kerja);
        float makan = uang_makan(jam_kerja);
        int jasa = jasa_lembur(jam_kerja);

        cout << nama << " Bekerja Selama " << jam_kerja << " Jam, maka " << endl;
        
        
        cout << "\nGaji Pokok           = ";
        if (jam_kerja > 7) {
            cout << "7 * " << gaji_per_jam;
        } else {
            cout << jam_kerja << " * " << gaji_per_jam;
        }
        cout << "                    = " << gajipk << endl;

       
        if (jam_kerja > 7) {
            int jamLembur = jam_kerja - 7;
            cout << "Uang Lembur          = " << jamLembur << " * " << uang_lembur_per_jam 
                 << "                    = " << lembur << endl;
        }
     
        cout << "Uang Makan                                         = " << makan << endl;
        cout << "Uang Jasa Lembur                                   = " << jasa << endl;
       
        float gajiTotal = gajipk + lembur + makan + jasa;
        cout << "Gaji yang Diterima                                 = " << gajiTotal << endl;

        
        lagi = getch () ;
        cout <<endl;

    } while (lagi == 'y' || lagi == 'Y'); 
     
    return 0;
}

float gaji_pokok(float gajiPerJam, int jam_kerja) {
   
    if (jam_kerja > 7) {
        return 7 * gajiPerJam;
    } else {
        return jam_kerja * gajiPerJam;
    }
}

int uang_lembur(int jam_kerja) {
   
    if (jam_kerja > 7) {
        int jam_lembur = jam_kerja - 7;
        return jam_lembur * uang_lembur_per_jam;
    }
    return 0;
}

float uang_makan(int jam_kerja) {
   
    if (jam_kerja >= 8 && jam_kerja <= 10) {
        return 1500; 
    } else if (jam_kerja > 10) {
        return 2500; 
    }
    return 0; 
}

int jasa_lembur(int jam_kerja) {
   
    if (jam_kerja >= 9) {
        return 3000; 
    }
    return 0; 
}

