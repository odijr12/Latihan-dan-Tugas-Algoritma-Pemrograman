#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1 = "STMIK";
	string str2 = "Penusa";
	
	// Concatenation = Menggabungkan lebih dari satu string
	string result = str1 + " " + str2;
	cout << "Concatenated: " <<result <<endl;
	
	// Length = Panjang string
	size_t length = result.length();
	cout << "Length: " <<length <<endl;
	
	// Substring = Mengambil string
	string sub = result.substr(6, 6);
	cout << "Substring: " <<sub <<endl;
	
	// Find = Mencari Posisi
	size_t pos = result.find("PENUSA");
	cout << "Position of 'PENUSA': " <<pos <<endl;
	
	// Replace = Menyisipkan atau menambahkan
    result.replace(0, 5, "Hi");
    cout << "Replaced: " <<result <<endl;

 return 0;
} 
