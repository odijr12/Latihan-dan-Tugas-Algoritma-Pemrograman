#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int i=0; //menggunakan while 2 dimensi tidak bakal bisa,walaupun bisa hasil pasti tidak sama jika menggunakan for
	int	k=0;
	while (i<5)
	while (k<5){
		cout <<"perulangan ke-"<<i<<","<<k<<endl;i++;k++;
	}
	return 0;
}

