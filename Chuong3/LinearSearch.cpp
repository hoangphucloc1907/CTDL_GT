#include <iostream>
using namespace std;

#define MAX 100

void Nhap(int a[], int n){
	
	for(int i = 0; i < n; i++){
		cout << "Nhap a["<< i <<"]: ";
		cin >> a[i];
	} 
}

void Xuat(int a[], int n){
	cout << "Cac phan tu trong mang la: ";
	for(int i = 0; i<n; i++){
		cout << a[i] << " ";
	}
}

int linearSearch(int a[], int n, int x){
	for (int i = 0; i < n; i++){
		if (a[i] == x)
			return i;
	}
	return -1;
}


int main(){
	int a[MAX];
	int n, x;
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	Nhap(a,n);
	Xuat(a,n);
	cout << "\nNhap x can tim trong mang: ";
	cin >> x;
	
	int kq = linearSearch(a, n, x);
	if (kq == -1)
		cout << "Khong tim thay x = " << x << " trong mang";
	else
		cout << "X o vi tri " << kq;
	 
	return 0;
}
