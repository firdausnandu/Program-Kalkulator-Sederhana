#include<iostream>
using namespace std;
int main(){
	float tambah,kurang,kali,bagi,a,b;
	int pilih;
	cout<<"====================="<<endl;
	cout<<"KALKULATOR SEDERHANA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"====================="<<endl;
	cout<<"\n";
	cout<<"Masukan Pilihan Anda : ";cin>>pilih;
	switch (pilih){
		case 1:
			cout<<"\nMasukan bilangan a: ";cin>>a;
			cout<<"Masukan bilangan b: ";cin>>b;
			tambah=a+b;
			cout<<"\nHasil "<<a<<" + "<<b<<" adalah = "<<tambah;
			break;
		case 2:
			cout<<"\nMasukan bilangan a: ";cin>>a;
			cout<<"Masukan bilangan b: ";cin>>b;
			kurang=a-b;
			cout<<"\nHasil "<<a<<" - "<<b<<" adalah = "<<kurang;
			break;
		case 3:
			cout<<"\nMasukan bilangan a: ";cin>>a;
			cout<<"Masukan bilangan b: ";cin>>b;
			kali=a*b;
			cout<<"\nHasil "<<a<<" * "<<b<<" adalah = "<<kali;
			break;
			
		case 4:
			cout<<"\nMasukan bilangan a: ";cin>>a;
			cout<<"Masukan bilangan b: ";cin>>b;
			bagi=a/b;
			cout<<"Hasil "<<a<<" / "<<b<<" adalah = "<<bagi;
			break;
		
		}
		
	}
