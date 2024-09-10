#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	int bil;
	cout<< "Ketika Angka dari [0..9] =";
	cin>>bil;
	switch(bil){
		
	case 0 :
	        cout<<"Anda Mengetikan Angka 0";
	        break;
    case 1 :
	        cout<<"Anda Mengetikan Angka 1";
	        break;
	case 2 :
	        cout<<"Anda Mengetikan Angka 2";
	        break;        
    case 3 :
	        cout<<"Anda Mengetikan Angka 3";
	        break;
	case 4 :
	        cout<<"Anda Mengetikan Angka 4";
	        break;        
    case 5 :
	        cout<<"Anda Mengetikan Angka 5";
	        break;
    case 6 :
	        cout<<"Anda Mengetikan Angka 6";
	        break;
    case 7 :
	        cout<<"Anda Mengetikan Angka 7";
	        break;
    case 8 :
	        cout<<"Anda Mengetikan Angka 8";
	        break;
    case 9 :
	        cout<<"Anda Mengetikan Angka 9";
	        break;

    default:
            cout<<"Anda Mengetikan Yang Salah";
	}
	 
	
	return 0;
}
