#include <iostream>
using namespace std;

struct ThanhPho {
	int maTP;
	char tenTP[30];
	float dientich;
};

void nhap(ThanhPho &tp) {
	cout << "Nhap ma thanh pho: " << endl;
	cin >> tp.maTP;
	cout << "Nhap ten thanh pho: " << endl;
	cin >> tp.tenTP;
	cout << "Nhap dien tich thanh pho: " <<endl;
	cin >> tp.dientich;
}
void xuat(ThanhPho tp) {
	cout << "Ma thanh pho: " << tp.maTP << endl;
	cout << "Ten thanh pho: " << tp.tenTP << endl;
	cout << "Dien tich thanh pho: " << tp.dientich <<" Km" << endl;
}


int main (){
	ThanhPho tp;
	nhap(tp);
	xuat(tp);
	return 0;
}

