#include <iostream>
using namespace std;

struct DonThuc{
	int heSo;
	int soMu;
};

void Nhap(DonThuc &dt){
	cout << "Nhap he so: ";
	cin>>dt.heSo;
	cout << "Nhap so mu: ";
	cin>> dt.soMu;
}

void Xuat(DonThuc dt){
	cout << "P(x) = " << dt.heSo << "x^" << dt.soMu;
}

int main(){
	DonThuc dt;
	Nhap(dt);
	Xuat(dt);
}
