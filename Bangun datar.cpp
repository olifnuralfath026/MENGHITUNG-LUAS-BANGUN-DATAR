/*
NAMA KELOMPOK : 1.HOLIP AROLIAH(KETUA)
				2.EMA NELIS(ANGGOTA)
				3.SATRI HASNIA(ANGGOTA)

*/
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
   float pilih,a, t, r, p, l, hasil;
   	cout<<"MENGHITUNG LUAS BANGUN DATAR\n";
   	cout<<"1. Persegi\n";
	cout<<"2. Persegi Panjang\n";
	cout<<"3. Segitiga\n";
	cout<<"4. Lingkaran\n";
	cout<<"Pilih Nomor : ";
	cin>>pilih;
	
		if(pilih==1)
		{
		cout<<"Rumus Luas Persegi\n";
		cout<<"L = s*s\n";
		cout<<"Masukan sisi (cm) : ";
		cin>>p;
		hasil=p*p;
		cout<<"Luas = ";cout<<hasil;cout<<" cm\n";
		 }
		 
		 if(pilih==2)
		 {
		cout<<"Rumus Luas Persegi Panjang\n";
		cout<<"L = p*l\n";
		cout<<"Masukan panjang (cm) : ";
		cin>>p;
		cout<<"Masukan lebar (cm) : ";
		cin>>l;
		hasil=p*l;
		cout<<"Luas = ";cout<<hasil;cout<<" cm\n";
		  }
		  
		  if(pilih==3)
		  {
		cout<<"Rumus Luas Segitiga\n";
		cout<<"L = 1/2*a*t\n";
		cout<<"Masukan alas (cm) : ";
		cin>>p;
		cout<<"Masukan tinggi (cm) : ";
		cin>>t;
		hasil=p*t/2;
		cout<<"Luas = ";cout<<hasil;cout<<" cm\n";

		  }
		if(pilih==4)
		{
		cout<<"Rumus Luas Lingkaran\n";
		cout<<"L = vr*r\n";
		cout<<"Masukan jari-jari (cm) : ";cin>>p;
		hasil=p*p*22/7;
		cout<<"Luas = ";cout<<hasil;cout<<" cm\n";
		}
		return 0;
}
