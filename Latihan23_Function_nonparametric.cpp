#include <iostream>
#include <conio.h>

using namespace std;

void hitung() ; // Mendeklaraskikan (prototype) fungsi yang tidak menghasilkan nilai

int main() {
	
	cout << "\n Menghitung Volume KUBUS" ;
	hitung(); // Memanggil Fungsi hitung
	return 0;
	
}

void hitung(){
	
	float sisi,volume;
	cout << "\n Sisi Kubus : ";
	cin >> sisi;
	volume = sisi* sisi * sisi ;
	cout << "\n Volume KUBUS yaitu : " <<volume ;
}
