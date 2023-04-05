#include <stdio.h>
#include <conio.h>

#define MAX 100

void Nhap(int a[], int n){
	for (int i = 0; i<n; i++){
		printf("Nhap a[%d] = ",i);
		scanf("%d", &a[i]);
	}
}

void Xuat(int a[], int n){
	printf("Cac phan tu trong mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ",a[i] );
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
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	Nhap(a,n);
	Xuat(a,n);
	printf("Nhap x can tim trong mang: ");
	scanf("%d", &x);
	
	int kq = linearSearch(a, n, x);
	printf("X o vi tri %d", kq);
	
	return 0;
}
