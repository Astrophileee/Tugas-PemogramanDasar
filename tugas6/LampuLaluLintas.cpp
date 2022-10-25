#include <iostream>
using namespace std;

int main(){
	string lampu;
	
	ulang:
	cout<<"======================================"<<endl;
	cout<<"Masukan Warna Lampu Lalu Lintas\t:";
	cin>>lampu;
	
	if((lampu == "merah") | (lampu == "Merah")){
		cout<<"======================================"<<endl;
		system("Color 04");
		cout<<"Berhenti";
	}else if((lampu == "hijau")| (lampu == "Hijau")){
		cout<<"======================================"<<endl;
		system("Color 02");
		cout<<"Jalan";
	}else if((lampu == "kuning") | (lampu == "Kuning")){
		cout<<"======================================"<<endl;
		system("Color 06");
		cout<<"Siap - Siap";
	}else{
		cout<<"Warna Lampu Yang Anda Masukan Salah"<<endl;
		goto ulang; //goto adalah salah satu control flow / control statment di c++ (jump statment)
	}
	
}
