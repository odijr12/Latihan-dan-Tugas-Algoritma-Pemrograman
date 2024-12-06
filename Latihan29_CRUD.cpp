#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Struct untuk menyimpan data
struct Data {
	int nik ;
	string nama ;
	int gaji ;
};
                                               
// Fungsi untuk menambahkan data (create)
void addData(const string &filename) {
	ofstream file(filename, ios::app) ;     //ofstream = merupakan singkatan open file
	if (!file.is_open()) {                  // if ! = not/tidak jika tidak ada filenya maka not/tidak ada
		cout << "Error: Tidak dapat membuka file!" <<endl;
		return ;
	}
	
	Data data;
	cout << "Masukkan NIK  : " ;
	cin >> data.nik ;
	cin.ignore() ; // Membersihkan Buffer
	cout << "Masukkan Nama : " ;
	getline(cin,data.nama) ;
	cout << "Masukkan Gaji : " ;
	cin >> data.gaji;
	
	file << data.nik << "," << data.nama << "," << data.gaji << endl;
	file.close();
	cout << "Data Berhasil ditambahkan!" << endl;
}

// Fungsi untuk membaca semua data (read)
void readData(const string &filename) {
	ifstream file(filename);
	if (!file.is_open()) {
		cout << "Error: Tidak dapat membuka file!" << endl;
		return ;
	}
	string line;
	cout << "Data dalam file:" << endl;
	cout << "NIK\t\t\tNama\t\t\tGaji" << endl;
	while (getline(file,line)) {
		stringstream ss(line) ;
		string nik, nama, gaji ;
		getline(ss, nik, ',')  ;
		getline(ss, nama, ',') ;
		getline(ss, gaji, ',') ;
		
		cout << nik << "\t\t\t" << nama << "\t\t\t" << gaji << endl;
	}
	file.close();	
}

// Fungsi untuk memperbarui data (Update) 
void updateData(const string &filename) {
	ifstream file(filename) ;
	if (!file.is_open()) {
		cout << "Error: Tidak dapat membuka file!" << endl;
		return ;
	}
	vector<Data> dataList;  // fungsi vector untuk menempatkan data, juga bisa membaca data array di layar
	string line;
	while (getline(file, line)) {
		stringstream ss(line);
		Data data;
		string nik, gaji ;
		getline(ss, nik, ',')  ;
		getline(ss, data.nama, ',') ;
		getline(ss, gaji, ',') ;
		data.nik = stoi(nik);
		data.gaji = stoi(gaji);
		dataList.push_back(data);
	}
	file.close();
	
	int targetId;
	cout << "Masukkan NIK data yang ingin di perbarui: ";
	cin >> targetId;
	cin.ignore();
	
	bool found = false;
	for (auto &data : dataList) {
		if (data.nik == targetId) {
			found = true;
			cout << "Masukkan Nama baru: ";
			getline(cin, data.nama);
			cout << "Masukkan Gaji baru: ";
			cin >> data.gaji;
			break;
		}
	}
	if (found) {
		cout << "Data dengan NIK " << targetId << "Tidak ditemukan!" <<endl;
		return;
	}
	ofstream outFile(filename, ios::trunc);
	for (const auto &data : dataList) {
		outFile << data.nik << "," << data.nama << "," << data.gaji << endl;
	}
	outFile.close();
	cout << "Data berhasil diperbarui!" << endl;
}

// Fungsi untuk menghapus data (Delete)
void deleteData(const string &filename) {
	ifstream file(filename);
	if (!file.is_open()) {
		cout << "Erorr: Tidak dapat membuka file!" << endl;
		return;
	}
	vector<Data> dataList;
	string line;
	while (getline(file, line)) {
		stringstream ss(line);
		Data data;
		string nik, gaji ;
		getline(ss, nik, ',')  ;
		getline(ss, data.nama, ',') ;
		getline(ss, gaji, ',') ;
		data.nik = stoi(nik);
		data.gaji = stoi(gaji);
		dataList.push_back(data);
	}
	file.close();
	
	int targetId;
	cout << "Masukkan NIK data yang ingin dihapus: " ;
	cin >> targetId;
	
	bool found = false; // auto it untuk mencari secara otomatis 
	for (auto it = dataList.begin(); it != dataList.end() ++it) {
		if (it->nik == targetId) {
		}
	}
	}
	







int main() {
	cout << setprecision(15) ;
}

