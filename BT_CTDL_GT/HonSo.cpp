#include <iostream>
using namespace std;

struct HonSo {
	int nguyen;
	int tu;
	int mau;
};

void Nhap(HonSo &hs){
	cout << "Nhap phan nguyen: ";
	cin >> hs.nguyen;
	cout << "Nhap tu so:";
	cin >> hs.tu;
	do{
		cout<< "Nhap mau so: ";
		cin >> hs.mau;
		if(hs.mau == 0){
			cout << "Mau so phai khac 0.";
		}
	}while(hs.mau == 0);
}

void Xuat(HonSo hs){
	cout << hs.nguyen << " (" << hs.tu << "/" << hs.mau << ")";
}

int main(){
	HonSo hs;
	
	Nhap (hs);
	cout << "Hon so la: ";
	Xuat (hs);
}
