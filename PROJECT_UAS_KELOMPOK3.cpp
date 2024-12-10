#include <iostream>                                       
#include <vector>								  
#include <iomanip>								  
#include <fstream>                                                                
#include <cstdlib>
#include <dos.h>
#include <conio.h>
#include <windows.h>

 /*        KELOMPOK 3
    ODI JUNIOR MANALU        (240121068)
    MUHAMMAD RIZAL MUHAIMIN  (240121076)
    MAIRA MAULYDIA           (240121094)
    SINTA SUWANDA            (240121095) */

using namespace std;


void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x; 
    coord.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct DataNilai {
    string nama, programstudi, kodematkul, matkul;
    int npm, semester;
    float ntugas, nquiz, nuts, nuas, nakhir;
    char nhuruf;
};

void hitungNilai(DataNilai &data) {
    data.nakhir = (0.1 * data.ntugas) + (0.15 * data.nquiz) + (0.25 * data.nuts) + (0.5 * data.nuas);
    if (data.nakhir >= 85)
        data.nhuruf = 'A';
    else if (data.nakhir >= 70)
        data.nhuruf = 'B';
    else if (data.nakhir >= 60)
        data.nhuruf = 'C';
    else if (data.nakhir >= 50)
        data.nhuruf = 'D';
    else
        data.nhuruf = 'E';
}

void tambahData(vector<DataNilai> &dataNilai) {
    DataNilai data;
    
    system("cls");
    gotoxy(15,14);
    cout << "NPM              : ";
    cin >> data.npm;    
    gotoxy(15,15);
    cout << "Nama Mahasiswa   : ";
    cin.ignore();
    getline(cin, data.nama);
    gotoxy(15,16);
    cout << "Program Studi    : ";
    getline(cin, data.programstudi);
    gotoxy(15,17);
    cout << "Kode Mata Kuliah : ";
    getline(cin, data.kodematkul);
    gotoxy(15,18);
	cout << "Nama Mata Kuliah : ";
    getline(cin, data.matkul);
    gotoxy(15,19);
	cout << "Semester         : "; 
	cin >> data.semester;
	gotoxy(15,20);
    cout << "Nilai Tugas      : ";
    cin >> data.ntugas;
    gotoxy(15,21);
    cout << "Nilai Quiz       : ";
    cin >> data.nquiz;
    gotoxy(15,22);
    cout << "Nilai UTS        : ";
    cin >> data.nuts;
    gotoxy(15,23);
    cout << "Nilai UAS        : ";
    cin >> data.nuas;

    hitungNilai(data);
    dataNilai.push_back(data);
    system("cls");
    cout << "\n\n";
    cout << "Data berhasil ditambahkan!\n"<<endl;
    
    
}

void lihatData(const vector<DataNilai> &dataNilai) {
	
    
	cout << "\n\n";
	cout << string(138, '-') << endl;		
    cout << setw(6 ) << "NPM" 
	     << setw(19) << "Nama" 
		 << setw(26) << "Program Studi"
         << setw(18) << "Kode MK"
		 << setw(21) << "Mata Kuliah" 
		 << setw(16) << "Semester"
         << setw(16) << "Nilai Akhir" 
		 << setw(15) << "Nilai Huruf" << endl;
    cout << string(138, '-') << endl;
    for (const auto &data : dataNilai) {
        cout << setw(9 ) << data.npm 
		     << setw(19) << data.nama 
			 << setw(26) << data.programstudi
             << setw(14) << data.kodematkul
			 << setw(22) << data.matkul
             << setw(12) << data.semester 
			 << setw(17) << fixed << setprecision(2) << data.nakhir
             << setw(13) << data.nhuruf << endl;
             cout << string(138, '-') << endl;
    }
}

void hapusData(vector<DataNilai> &dataNilai) {
    int npm;
    cout << "Masukkan NPM yang ingin dihapus : ";
    cin >> npm;
    for (auto it = dataNilai.begin(); it != dataNilai.end(); ++it) {
        if (it->npm == npm) {
            dataNilai.erase(it);
            cout << "Data berhasil dihapus!\n";
            return;
        }
    }
    cout << "Data dengan NPM " << npm << " tidak ditemukan.\n";
}

void editData(vector<DataNilai> &dataNilai) {
    int npm;
    cout << "Masukkan NPM yang ingin diedit: ";
    cin >> npm;

    for (auto &data : dataNilai) {
        if (data.npm == npm) {
            cout << "\nData ditemukan! Silakan edit informasi berikut:\n";
            cout << "Nama Mahasiswa [" << data.nama << "] : ";
            cin.ignore();
            string namaBaru;
            getline(cin, namaBaru);
            if (!namaBaru.empty()) data.nama = namaBaru;

            cout << "Program Studi [" << data.programstudi << "] : ";
            string prodiBaru;
            getline(cin, prodiBaru);
            if (!prodiBaru.empty()) data.programstudi = prodiBaru;

            cout << "Kode Mata Kuliah [" << data.kodematkul << "] : ";
            string kodeMkBaru;
            getline(cin, kodeMkBaru);
            if (!kodeMkBaru.empty()) data.kodematkul = kodeMkBaru;

            cout << "Nama Mata Kuliah [" << data.matkul << "] : ";
            string mkBaru;
            getline(cin, mkBaru);
            if (!mkBaru.empty()) data.matkul = mkBaru;

            cout << "Semester [" << data.semester << "] : ";
            int semesterBaru;
            cin >> semesterBaru;
            if (semesterBaru > 0) data.semester = semesterBaru;

            cout << "Nilai Tugas [" << data.ntugas << "] : ";
            cin >> data.ntugas;

            cout << "Nilai Quiz [" << data.nquiz << "] : ";
            cin >> data.nquiz;

            cout << "Nilai UTS [" << data.nuts << "] : ";
            cin >> data.nuts;

            cout << "Nilai UAS [" << data.nuas << "] : ";
            cin >> data.nuas;

            hitungNilai(data);
            cout << "Data berhasil diperbarui!\n";
            return;
        }
    }

    cout << "Data dengan NPM " << npm << " tidak ditemukan.\n";
}

void cetakData(const vector<DataNilai> &dataNilai) {
    if (dataNilai.empty()) {
        cout << "Tidak ada data untuk dicetak!\n" << endl;
        return;
    }

    ofstream tempFile("temp_cetak.txt");
    if (!tempFile.is_open()) {
        cout << "Error: Tidak dapat membuat file sementara!\n" << endl;
        return;
    }

    
    tempFile << setw(10) << "NPM" 
             << setw(20) << "Nama" 
             << setw(15) << "Program Studi" 
             << setw(15) << "Kode MK" 
             << setw(15) << "Mata Kuliah" 
             << setw(10) << "Semester" 
             << setw(10) << "Nilai Akhir" 
             << setw(10) << "Nilai Huruf" << endl;          
    tempFile << string(100, '=') << endl;

    for (const auto &data : dataNilai) {
        tempFile << setw(10) << data.npm 
                 << setw(20) << data.nama 
                 << setw(15) << data.programstudi 
                 << setw(15) << data.kodematkul 
                 << setw(15) << data.matkul 
                 << setw(10) << data.semester 
                 << setw(10) << fixed << setprecision(2) << data.nakhir 
                 << setw(10) << data.nhuruf  << endl;               
    }
    tempFile << string(100, '=') << endl;
    tempFile.close();

    int status = system("notepad /p temp_cetak.txt");
    if (status == 0) {
        cout << "Data berhasil di cetak!\n" << endl;
    } else {
        cout << "Error: Gagal mencetak data!\n" << endl;
    }

    remove("temp_cetak.txt");
}

int main() {
    vector<DataNilai> dataNilai;
    int pilihan;
    char ch;
    string user = "";
	string pass = "";   
	 
    login:
	system("cls");
	cout << "\n\n\n\n\n\n\n\n";
	cout << "\t\t ------- PROGRAM APLIKASI DATA NILAI MAHASISWA --------\n\n";
	cout << "\t\t\t  Username : "; cin>>user;
	cout << "\t\t\t  Password : ";
	ch = _getch();
    while(ch != 13){ 
    pass.push_back(ch);
    cout << '*';
    ch = _getch();
    }
    cout<<endl;
	if(user == "admin" && pass == "12345678"){
		cout << "\n\n Anda berhasil login. \n" <<endl;
		system("pause");
		system("cls");
		
	}else{
		cout << " Password Anda Salah \n";
   	    system("pause");
   	    system("cls");
	 	goto login;
	}


    do {
    	cout << "\n\n\n";
        cout << "\t\t\t==========================\n"<<endl;
        cout << "\t\t\t TUGAS PROJECT KELOMPOK 3\n";
        cout << "\t\t\t   DATA NILAI MAHASISWA \n"<<endl;
        cout << "\t\t\t==========================\n";
        cout << "\n\n";
        cout << "\nMenu:\n";
        cout << "1. Tambah Data Nilai\n";
        cout << "2. Edit Data Nilai\n";
        cout << "3. Hapus Data Nilai\n";
        cout << "4. Lihat Data Nilai\n";
        cout << "5. Cetak Data Nilai\n";
        cout << "6. Keluar\n" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        system("cls");
   
        switch (pilihan) {
            case 1:
                tambahData(dataNilai);
                break;
            case 2:
                editData(dataNilai);
                break;
            case 3:
                hapusData(dataNilai);
                break;
            case 4:
                lihatData(dataNilai);
                break;
            case 5:
                cetakData(dataNilai);
                break;
            case 6:
                cout << "Keluar dari program aplikasi.\n";				
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (pilihan != 6);

    return 0;
}
