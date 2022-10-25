#include <iostream>
using namespace std;
int main(){
	string nomorPegawai, namaPegawai, namaJabatan, namaStatus;
	int gaji,jamLembur, tunjangan, honor,total, pilihJabatan, pilihStatus;
	double persenTunjangan;
	
	cout<<"============================================="<<endl;
	cout<<"|| Program Penggajian Pegawai PT.Valorant ||"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Masukan Nomor Pegawai\t\t: ";
	cin>>nomorPegawai;
	cout<<"Masukan Nama Pegawai\t\t: ";
	getline(cin>>ws, namaPegawai);
	cout<<"Jabatan\t\t\t\t: 1. Operator"<<endl;
	cout<<"\t\t\t\t  2. Manajer";
	ulangJabatan :
	cout<<"\nPilih Jabatan\t(1/2)\t\t: ";
	cin>>pilihJabatan;
	//operator
	if(pilihJabatan == 1)
	{
		gaji = 2000000;
		namaJabatan = "Operator";
	}else if(pilihJabatan == 2){
		gaji = 3500000;
		namaJabatan = "Manajer";
	}else{
		cout<<"Angka Yang Anda Masukan Salah"<<endl;
		goto ulangJabatan;
	}
	ulangStatus:
	
	cout<<"Pilih Status Pernikahan(1/2/3)  : 1. Lajang"<<endl;
		cout<<"\t\t\t\t  2. Sudah Menikah"<<endl;
		cout<<"\t\t\t\t  3. Sudah Mempunyai Anak"<<endl;
		cout<<"Pilih Status\t\t\t: ";
		cin>>pilihStatus;
	if(pilihStatus == 1){
		namaStatus = "Lajang";
		persenTunjangan = 0.05;
	} else if(pilihStatus == 2){
		namaStatus = "Sudah menikah";
		persenTunjangan = 0.1;
	}else if(pilihStatus == 3){
		namaStatus = "Sudah Mempunyai Anak";
		persenTunjangan = 0.15;
	}else{
		cout<<"Angka yang Anda masukan salah";
		goto ulangStatus;
	}
	ulangJam :
	cout<<"Masukan Jam Lembur\t\t: ";
	cin>>jamLembur;
	if(jamLembur > 20){
		jamLembur = 20;
	}else if(jamLembur < 0){
		jamLembur = 0;
	}else if(jamLembur <= 20){
		jamLembur = jamLembur;
	}else{
		cout<<"Angka yang anda masukan salah"<<endl;
		goto ulangJam;
	}
	system("cls");
	cout<<"============================================="<<endl;
	cout<<"|| Program Penggajian Pegawai PT.Valorant ||"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Nomor Pegawai\t  : "<<nomorPegawai<<endl;
	cout<<"Nama Pegawai\t  : "<<namaPegawai<<endl;
	cout<<"Jabatan\t\t  : "<<namaJabatan<<endl;
	cout<<"Status Pernikahan : "<<namaStatus<<endl;
	cout<<"Gaji Pokok\t  : Rp."<<gaji<<endl;
	tunjangan = (persenTunjangan * gaji);
	cout<<"Tunjangan\t  : Rp."<<tunjangan<<endl;
	honor = 0.025 * gaji;
	honor = honor * jamLembur;
	cout<<"Honor Lembur\t  : Rp."<<honor<<endl;
	total = gaji + tunjangan + honor;
	cout<<"Total Gaji\t  : Rp."<<total<<endl;
	cout<<"============================================="<<endl;
}
