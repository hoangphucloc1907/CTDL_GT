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

int binarySearch (int a[], int n, int x){
	int left = 0 , right = n - 1;

//	for (int i = left; i <= right; i++){
//		int mid = (left + right)/2;
//		if (a[mid] == x)
//			return mid;
//		else if (a[mid] > x)
//			right = mid - 1;
//		else
//			left = mid + 1;
//	}
//	return -1;

	while (left <= right){
		int mid = (left + right)/2;
		if (a[mid] == x)
			return mid;
		else if (a[mid] > x)
			right = mid - 1;
		else
			left = mid + 1;
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
	
	int kq = binarySearch(a, n, x);
	cout << "X o vi tri: " << kq;
	
}
