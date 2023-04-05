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

int binarySearch(int a[], int n, int x){
	int left = 0, right = n-1;
	
	while(left <= right){
		int mid = (left + right)/2;
		if(a[mid] == x)
			return mid;
		else if(a[mid] < x)
			left = mid + 1;
		else
			right = mid -1;
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
	
	int kq = binarySearch(a, n, x);
	printf("X o vi tri %d", kq);
	
	return 0;
}
