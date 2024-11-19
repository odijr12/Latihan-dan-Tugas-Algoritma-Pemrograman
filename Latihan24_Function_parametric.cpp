#include <iostream>
#include <conio.h>

using namespace std;

float hitung ( int s); // fungsi parametric satu variabel

int main(){

	float volume,sisi;
	
	cout <<"\n Menghitung Volume KUBUS ";
	cout <<"\n Sisi Kubus :";
	cin >> sisi;
	volume = hitung(sisi);
	cout << "\n Volume KUBUS yaitu : "<<volume ;
	
}

float hitung ( int s)
{
	return (s * s *s);
}
