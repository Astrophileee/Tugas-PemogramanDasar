#include <iostream>
using namespace std;
int main(){
	
	int a,b,c,max;
	
	cout<<"Masukan Bilangan Pertama : ";
	cin>>a;
	cout<<"Masukan Bilangan Kedua   : ";
	cin>>b;
	cout<<"Masukan Bilangan Ketiga  : ";
	cin>>c;
	cout<<"================================================================"<<endl;
	if(a>b && a>c){
		max = a;
		cout<<"Bilangan paling besar adalah bilangan Pertama : "<<max<<endl;
	}else if(b>a && b>c){
		max = b;
		cout<<"Bilangan paling besar adalah bilangan Kedua   : "<<max<<endl;
	}else{
		max = c;
		cout<<"Bilangan Paling besar adalah bilangan Ketiga  : "<<max<<endl;
	}
	cout<<"================================================================"<<endl;
	if(a<b && a<c){
		cout<<"Bilangan paling kecil adalah bilangan Pertama : "<<a<<endl;
	}else if(b<a && b<c){
		cout<<"Bilangan paling kecil adalah bilangan Kedua   : "<<b<<endl;
	}else{
		cout<<"Bilangan Paling kecil adalah bilangan Ketiga  : "<<c<<endl;
	}
	cout<<"================================================================"<<endl;
	if(max>0){
		cout<<"Bilangan Terbesar Adalah POSITIF";
	}else if(max == 0){
		cout<<"Bilangan Terbesar Adalah NOL";
	}else{
		cout<<"Bilangan Terbesar Adalah NEGATIF";
	}
	
	
	
	
}
