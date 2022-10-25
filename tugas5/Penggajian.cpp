#include <iostream>
using namespace std;

int main(){
	string nik, nama;
	long long gaji_pokok, jam_lembur, tunjangan, upah_lembur, total_gaji;
	const double a = 0.1 , b = 0.05; 
	cout<<"Program Penggajian"<<endl;
	cout<<"=========================="<<endl;
	cout<<"Masukan NIK\t\t  : ";
	getline(cin>>ws, nik);
	cout<<"Masukan Nama\t\t  : ";
	getline(cin>>ws, nama);
	cout<<"Masukan Gaji Pokok(Rp.)\t  : ";
	cin>>gaji_pokok;
	cout<<"Masukan Jumlah Jam Lembur : ";
	cin>>jam_lembur;
	cout<<"\n=========================="<<endl;
	cout<<"NIK\t\t\t: "<<nik<<endl;
	cout<<"Nama\t\t\t: "<<nama<<endl;
	cout<<"Gaji Pokok(Rp.)\t\t: "<<gaji_pokok<<endl;
	tunjangan = a*gaji_pokok;
	cout<<"Tunjangan Kerja(Rp.)\t: "<<tunjangan<<endl;
	upah_lembur = b*gaji_pokok;
	upah_lembur = upah_lembur * jam_lembur;
	cout<<"Upah Lembur(Rp.)\t: "<<upah_lembur<<endl;
	total_gaji = gaji_pokok + tunjangan + upah_lembur;
	cout<<"Total Gaji(Rp.)\t\t: "<<total_gaji<<endl;
	cout<<"=========================="<<endl;
}
