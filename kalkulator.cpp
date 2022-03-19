#include<iostream>
using namespace std;
int main(){
	float tambah,kurang,kali,bagi,a,b;
	int pilih;
	cout<<"KALKULATOR SEDERHANA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"Masukan Pilihan Anda : ";cin>>pilih;
	switch (pilih){
		case 1:
			cout<<"Masukan bilangan a: ";cin>>a;
			cout<<"Masukan bilangan b: ";cin>>b;
			tambah=a+b;
			cout<<"Hasil "<<a<<" + "<<b<<" adalah = "<<tambah;
			break;
		case 2:
			cout<<"Masukan bilangan a: ";cin>>a;
			cout<<"Masukan bilangan b: ";cin>>b;
			kurang=a-b;
			cout<<"Hasil "<<a<<" - "<<b<<" adalah = "<<kurang;
			break;
	}
}
