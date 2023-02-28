#include <iostream>
using namespace std;

struct PhanSo {
	int tu;
	int mau;
};

void Nhap(PhanSo &ps){
	cout << "Nhap tu so:";
	cin >> ps.tu;
	do{
		cout<< "Nhap mau so: ";
		cin >> ps.mau;
		if(ps.mau == 0){
			cout << "Mau so phai khac 0.";
		}
	}while(ps.mau == 0);
}

void Xuat(PhanSo ps){
	cout << ps.tu << "/" << ps.mau;
}

int main(){
	PhanSo ps;
	
	Nhap (ps);
	cout << "Phan so la: ";
	Xuat (ps);
}
