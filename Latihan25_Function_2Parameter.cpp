#include <iostream>
#include <conio.h>

using namespace std;

float luas ( float panjang , float lebar);  // FUNGSI DENGAN DUA PARAMETER

 int main(){
 
 	float panjang_se, lebar_se, luas_se ;
 	
 	cout << "Program menghitung luas segiempat \n";
 	
 	/* Input panjang dan lebar */
 	cout << "\n\t Panjang : ";   // \t adalah tabulasi fungsinya memberikan ruang antar kolom
 	cin >> panjang_se;
 	cout << "\n\t Lebar  : ";
 	cin >> lebar_se;
 	/* menghitung luas segi empat */
 	luas_se = luas(panjang_se, lebar_se);
 	cout << "\n\n Luas Segiempat = "<< luas_se;
 }
 
 float luas(float panjang , float lebar_) //float lebih baik di bedakan karna mungkin bakal membingungkan (contoh lebar_)
 {
 	return (panjang * lebar_) ; // juga di ganti
 }

