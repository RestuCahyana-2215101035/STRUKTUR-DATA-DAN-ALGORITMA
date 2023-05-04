#include <iostream>
using namespace std;
int main(){
	cout<<"PROGRAM BINARY SEARCH"<<endl;
	int angka[] = {1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(angka)/sizeof(*angka);
	int cari, hasil;
	cout<<"Terdapat "<<length<<" data "<<endl;


	cout<<"Data yang ingin dicari : ";
	cin>>cari;
	for (int b = 0; b < length; b++){
		if(cari == angka[b]){
			hasil++;
		}
	}
	if(hasil == 0){
		cout<<"Data yang dicari tidak ditemukan"<<endl;
	
	}else{
		cout<<"Data "<<cari<<" ditemukan pada :"<<endl;
		for(int c = 0; c <length; c++){
			if(cari == angka[c]){
				cout<<"Index ke-"<<c<<endl;
			}
		}
	}
}

