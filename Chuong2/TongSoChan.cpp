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

int tongSoChan (int a[], int n){
	if (n == 0)
		return 0;
	if (a[n-1] % 2 == 0)
		return tongSoChan(a, n-1) + a[n-1];
	return tongSoChan(a, n - 1);
} 


int main(){
	int a[MAX];
	int n, x;
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	Nhap(a,n);
	Xuat(a,n);
	
	int s = tongSoChan(a,n);
	cout << "\nTong cac so chan la: " << s;
	return 0;
}
