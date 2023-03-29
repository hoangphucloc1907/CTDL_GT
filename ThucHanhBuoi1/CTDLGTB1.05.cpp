#include <iostream>
using namespace std;

#define MAX 100

void Nhap(float a[], int n){
	
	for(int i = 0; i < n; i++){
		cout << "Nhap a["<< i <<"]: ";
		cin >> a[i];
	} 
}

void Xuat(float a[], int n){
	cout << "Cac phan tu trong mang la: \n";
	for(int i = 0; i<n; i++){
		cout << a[i] << " ";
	}
}

int demSoDuong(float a[], int n){
	if (n == 0)
		return 0;
	if (a[n-1] > 0)
		return 1 + demSoDuong(a, n - 1);
	return demSoDuong(a, n - 1);
}

int main(){
	float a[MAX];
	int n;
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	Nhap(a,n);
	Xuat(a,n);
	
	int dem = demSoDuong(a, n);
	cout <<" \nSo duong trong mang la "<< dem;
}
