#include <iostream>
using namespace std;

int main(){
	double nilai;
	ulang :
	cout<<"Masukan Nilai Anda(0-100) : ";
	cin>>nilai;
	cout<<"===================================="<<endl;
	if(nilai >= 80.00){
		cout<<"Nilai Anda : A";
	}else if(nilai >= 65.0 && nilai <= 79.0){
		cout<<"Nilai Anda : B";
	}else if(nilai >= 50.0 && nilai <=64.0){
		cout<<"Nilai Anda : C";
	}else if(nilai >= 35.0 && nilai <= 49.0){
		cout<<"Nilai Anda : D";
	}else if(nilai >= 0 && nilai <= 34.0){
		cout<<"Nilai Anda : E";
	}else {
		cout<<"Angka Yang Anda Masukan Salah "<<endl;
		goto ulang;
	}
}
