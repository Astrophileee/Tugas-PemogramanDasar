#include <iostream>
using namespace std;

int main() {
	string nama_kasir, no_barang, nama_barang;
	long long qty, harga, total, potongan, pembayaran, kembalian;
	
	cout<<"Program Kasir Kelontong"<<endl;
	cout<<"=========================="<<endl;
	cout<<"Nama Kasir\t: ";
	getline(cin>>ws, nama_kasir);
	cout<<"Nomor Barang\t: ";
	getline(cin>>ws, no_barang);
	cout<<"Nama Barang\t: ";
	getline(cin>>ws, nama_barang);
	cout<<"Harga\t\t: ";
	cin>>harga;
	cout<<"Jumlah Barang\t: ";
	cin>>qty;
	cout<<"=========================="<<endl;
	cout<<"Jumlah Bayar\t: "<<(harga*qty);
	cout<<endl;
	cout<<"Potongan\t: ";
	cin>>potongan;
	cout<<"Total Bayar \t: "<<(harga*qty)-potongan;
	cout<<endl;
	cout<<"Pembayaran\t: ";
	cin>>pembayaran;
	total = (harga*qty)-potongan;
	total = pembayaran - total;
	cout<<"Kembalian\t: "<<total;
	cout<<"\n=========================="<<endl;
	cout<<"\tTerima Kasih";
	
}
