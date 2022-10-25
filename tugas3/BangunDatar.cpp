#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
  int pilihan;
  char ulang;
  cout<<"\n\n\n\t\t\t\t======== Mencari Luas Bangun Datar =======\n\n";
  cin.get();
  system("cls");
  do
  {
  	system("cls");
    cout << "\n\n\n\n\t\t\t\t##  Daftar Bangun Datar  ##" << endl;
    cout << "\t\t\t\t==============================" << endl;
    cout << "\t\t\t\t1. Persegi" << endl;
    cout << "\t\t\t\t2. Persegi Panjang" << endl;
    cout << "\t\t\t\t3. Segitiga " << endl;
    cout << "\t\t\t\t4. Jajar Genjang" << endl;
    cout << "\t\t\t\t5. Trapesium" << endl;
    cout << "\t\t\t\t6. Belah Ketupat" << endl;
    cout << "\t\t\t\t7. Lingkaran" << endl;
    cout << endl;
 
    cout << "\t\t\t\tPilihan anda(Pilih Angka): ";
    cin >> pilihan;
 
    switch(pilihan){
    case 1:
    	int SisiPersegi, LuasPersegi;
    	system("cls");
        cout << "\n\n\t\t\t\t\tMencari Luas Persegi" << endl;
        cout << "\t\t\t\t======================================" << endl;
        cout << "\t\t\t\tRumus Luas Persegi" << endl;
        cout << "\t\t\t\tL = S x S" << endl;
        cout << "\t\t\t\tL = Luas" << endl;
        cout << "\t\t\t\tS = Sisi" << endl;
        cout << "\t\t\t\tMasukan Sisi Persegi = ";
        cin>>SisiPersegi;
        cout << "\t\t\t\t==============================" << endl;
        cout << "\t\t\t\tDiketahui: " << endl;
        cout << "\t\t\t\tSisi Persegi = "<<SisiPersegi<< endl;
        cout << "\t\t\t\tL = S x S" << endl;
        cout << "\t\t\t\tL = "<<SisiPersegi<<" x "<<SisiPersegi<< endl;
        LuasPersegi = (SisiPersegi*SisiPersegi);
        cout << "\t\t\t\tLuas Perseginya Adalah = "<<LuasPersegi<<endl;
        break;
    case 2:
    	int LuasPersegiPanjang, PanjangPersegiPanjang, LebarPersegiPanjang;
    	system("cls");
        cout << "\n\n\t\t\t\t\tMencari Luas Persegi Panjang" << endl;
        cout << "\t\t\t\t======================================" << endl;
        cout << "\t\t\t\tRumus Luas Persegi Panjang" << endl;
        cout << "\t\t\t\tL = p x l" << endl;
        cout << "\t\t\t\tL = Luas" << endl;
        cout << "\t\t\t\tp = Panjang" << endl;
        cout << "\t\t\t\tl = Lebar" << endl;
        cout << "\t\t\t\tMasukan Panjang Persegi Panjang = ";
        cin>>PanjangPersegiPanjang;
        cout << "\t\t\t\tMasukan Lebar Persegi Panjang   = ";
        cin>>LebarPersegiPanjang;
        cout << "\t\t\t\t==============================" << endl;
        cout << "\t\t\t\tDiketahui: " << endl;
        cout << "\t\t\t\tPanjang Persegi Panjang = "<<PanjangPersegiPanjang<< endl;
        cout << "\t\t\t\tLebar Persegi Panjang   = "<<LebarPersegiPanjang<< endl;
        cout << "\t\t\t\tL = p x l" << endl;
        cout << "\t\t\t\tL = "<<PanjangPersegiPanjang<<" x "<<LebarPersegiPanjang<< endl;
        LuasPersegiPanjang = (PanjangPersegiPanjang*LebarPersegiPanjang);
        cout << "\t\t\t\tLuas Persegi Panjangnya Adalah = "<<LuasPersegiPanjang<<endl;
        break;
    case 3:
        double LuasSegitiga, AlasSegitiga, TinggiSegitiga;
    	system("cls");
        cout << "\n\n\t\t\t\t\tMencari Luas Segitiga" << endl;
        cout << "\t\t\t\t======================================" << endl;
        cout << "\t\t\t\tRumus Luas Segitiga" << endl;
        cout << "\t\t\t\tL = (a x t)/2" << endl;
        cout << "\t\t\t\tL = Luas" << endl;
        cout << "\t\t\t\ta = Alas" << endl;
        cout << "\t\t\t\tt = Tinggi" << endl;
        cout << "\t\t\t\tMasukan Alas Segitiga   = ";
        cin>>AlasSegitiga;
        cout << "\t\t\t\tMasukan Tinggi Segitiga = ";
        cin>>TinggiSegitiga;
        cout << "\t\t\t\t==============================" << endl;
        cout << "\t\t\t\tDiketahui: " << endl;
        cout << "\t\t\t\tAlas Segitiga   = "<<AlasSegitiga<< endl;
        cout << "\t\t\t\tTinggi Segitiga = "<<TinggiSegitiga<< endl;
        cout << "\t\t\t\tL = (a x t)/2" << endl;
        cout << "\t\t\t\tL = ("<<AlasSegitiga<<" x "<<TinggiSegitiga<<")/2"<< endl;
        LuasSegitiga = (AlasSegitiga*TinggiSegitiga)/2;
        cout << "\t\t\t\tLuas Segitiganya Adalah = "<<LuasSegitiga<<endl;
        break;
    case 4:
        int LuasJajarGenjang, AlasJajarGenjang, TinggiJajarGenjang;
    	system("cls");
        cout << "\n\n\t\t\t\t\tMencari Luas Jajar Genjang" << endl;
        cout << "\t\t\t\t======================================" << endl;
        cout << "\t\t\t\tRumus Luas Jajar genjang" << endl;
        cout << "\t\t\t\tL = a x t" << endl;
        cout << "\t\t\t\tL = Luas" << endl;
        cout << "\t\t\t\ta = Alas" << endl;
        cout << "\t\t\t\tt = Tinggi" << endl;
        cout << "\t\t\t\tMasukan Alas jajar Genjang   = ";
        cin>>AlasJajarGenjang;
        cout << "\t\t\t\tMasukan Tinggi Jajar Genjang = ";
        cin>>TinggiJajarGenjang;
        cout << "\t\t\t\t==============================" << endl;
        cout << "\t\t\t\tDiketahui: " << endl;
        cout << "\t\t\t\tAlas Jajar Genjang   = "<<AlasJajarGenjang<< endl;
        cout << "\t\t\t\tTinggi Jajar Genjang = "<<TinggiJajarGenjang<< endl;
        cout << "\t\t\t\tL = a x t" << endl;
        cout << "\t\t\t\tL = "<<AlasJajarGenjang<<" x "<<TinggiJajarGenjang<< endl;
        LuasJajarGenjang = (AlasJajarGenjang*TinggiJajarGenjang);
        cout << "\t\t\t\tLuas Jajar Genjangnya Adalah = "<<LuasJajarGenjang<<endl;
        break;
    case 5:
        double LuasTrapesium, AlasTrapesiumPendek, AlasTrapesiumPanjang, TinggiTrapesium;
    	system("cls");
        cout << "\n\n\t\t\t\t\tMencari Luas Trapesium" << endl;
        cout << "\t\t\t\t======================================" << endl;
        cout << "\t\t\t\tRumus Luas Trapesium" << endl;
        cout << "\t\t\t\tL = 1/2 x (a x b) x t" << endl;
        cout << "\t\t\t\tL = Luas" << endl;
        cout << "\t\t\t\ta = Alas Pendek" << endl;
        cout << "\t\t\t\ta = Alas Panjang" << endl;
        cout << "\t\t\t\tt = Tinggi" << endl;
        cout << "\t\t\t\tMasukan Alas Pendek Trapesium  = ";
        cin>>AlasTrapesiumPendek;
        cout << "\t\t\t\tMasukan Alas Panjang Trapesium = ";
        cin>>AlasTrapesiumPanjang;
        cout << "\t\t\t\tMasukan Tinggi Trapesium       = ";
        cin>>TinggiTrapesium;
        cout << "\t\t\t\t==============================" << endl;
        cout << "\t\t\t\tDiketahui: " << endl;
        cout << "\t\t\t\tAlas Pendek Trapesium  = "<<AlasTrapesiumPendek<< endl;
        cout << "\t\t\t\tAlas Panjang Trapesium = "<<AlasTrapesiumPanjang<< endl;
        cout << "\t\t\t\tTinggi Trapesium       = "<<TinggiTrapesium<< endl;
        cout << "\t\t\t\tL = 1/2 x (a x b) x t" << endl;
        cout << "\t\t\t\tL = 1/2 x("<<AlasTrapesiumPendek<<" x "<<AlasTrapesiumPanjang<<") x "<<TinggiTrapesium<< endl;
        LuasTrapesium = 0.5*(AlasTrapesiumPendek*AlasTrapesiumPanjang)*TinggiTrapesium;
        cout << "\t\t\t\tLuas Trapesiumnya Adalah = "<<LuasTrapesium<<endl;
        break;
    case 6:
        double LuasBelahKetupat, DiagonalSisiBelahKetupat1, DiagonalSisiBelahKetupat2;
    	system("cls");
        cout << "\n\n\t\t\t\t\tMencari Luas Belah Ketupat" << endl;
        cout << "\t\t\t\t======================================" << endl;
        cout << "\t\t\t\tRumus Luas Belah Ketupat" << endl;
        cout << "\t\t\t\tL = 1/2 x (d1 x d2)" << endl;
        cout << "\t\t\t\tL = Luas" << endl;
        cout << "\t\t\t\td1 = Diagonal Sisi 1" << endl;
        cout << "\t\t\t\td2 = Diagonal Sisi 2" << endl;
        cout << "\t\t\t\tMasukan Diagonal Sisi 1 Belah Ketupat = ";
        cin>>DiagonalSisiBelahKetupat1;
        cout << "\t\t\t\tMasukan Diagonal Sisi 2 Belah Ketupat = ";
        cin>>DiagonalSisiBelahKetupat2;
        cout << "\t\t\t\t==============================" << endl;
        cout << "\t\t\t\tDiketahui: " << endl;
        cout << "\t\t\t\tDiagonal Sisi Belah Ketupat 1 = "<<DiagonalSisiBelahKetupat1<< endl;
        cout << "\t\t\t\tDiagonal Sisi Belah Ketupat 2 = "<<DiagonalSisiBelahKetupat2<< endl;
        cout << "\t\t\t\tL = 1/2 x (d1 x d2)" << endl;
        cout << "\t\t\t\tL = 1/2 x("<<DiagonalSisiBelahKetupat1<<" x "<<DiagonalSisiBelahKetupat2<<")"<< endl;
        LuasBelahKetupat = 0.5*(DiagonalSisiBelahKetupat2*DiagonalSisiBelahKetupat1);
        cout << "\t\t\t\tLuas Belah Ketupatnya Adalah = "<<LuasBelahKetupat<<endl;
        break;
    case 7:
        double LuasLingkaran, JariJariLingkaran;
    	system("cls");
        cout << "\n\n\t\t\t\t\tMencari Luas Lingkaran" << endl;
        cout << "\t\t\t\t======================================" << endl;
        cout << "\t\t\t\tRumus Luas Lingkaran" << endl;
        cout << "\t\t\t\tL = TT x r x r" << endl;
        cout << "\t\t\t\tL = Luas" << endl;
        cout << "\t\t\t\tTT = Konstanta Phi 22/7 atau 3,14" << endl;
        cout << "\t\t\t\tr = Jari Jari Lingkaran" << endl;
        cout << "\t\t\t\tMasukan Jari Jari Lingkaran = ";
        cin>>JariJariLingkaran;
        cout << "\t\t\t\t==============================" << endl;
        cout << "\t\t\t\tDiketahui: " << endl;
        cout << "\t\t\t\tJari Jari Lingkaran = "<<JariJariLingkaran<< endl;
        cout << "\t\t\t\tL = 3,14 x r x r" << endl;
        cout << "\t\t\t\tL = 3,14 x "<<JariJariLingkaran<<" x "<<JariJariLingkaran<< endl;
        LuasLingkaran = 3.14*JariJariLingkaran*JariJariLingkaran;
        cout << "\t\t\t\tLuas Lingkarannya Adalah = "<<LuasLingkaran<<endl;
        break;
    default:
        cout << "\t\t\t\tMenu tidak tersedia" << endl;
    }
    cout << endl;
 
    cout << "\t\t\t\tIngin memilih menu lain (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang!= 't');
 
  cout<<"\n\t\t\t\t========Terima Kasih!=======\n\n";
 
  cout << endl;
  return 0;
}
