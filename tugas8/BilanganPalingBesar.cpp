#include <iostream>
using namespace std;
int main(){
	
	int a,b,c;
	
	cout<<"Masukan Bilangan Pertama : ";
	cin>>a;
	cout<<"Masukan Bilangan Kedua   : ";
	cin>>b;
	cout<<"Masukan Bilangan Ketiga  : ";
	cin>>c;
	cout<<"======================================"<<endl;
	if(a>b && a>c){
		cout<<"Bilangan paling besar adalah bilangan Pertama : "<<a;
	}else if(b>a && b>c){
		cout<<"Bilangan paling besar adalah bilangan Kedua   : "<<b;
	}else{
		cout<<"Bilangan Paling besar adalah bilangan Ketiga  : "<<c;
	}
	
	
}
