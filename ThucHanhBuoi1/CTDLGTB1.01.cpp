#include <stdio.h>
#define MAX 100

void nhapMang(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Nhap a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n){
	printf("Cac phan tu trong mang la: \n");
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int tongSoChan(int a[], int n){
	if (n == 0)
		return 0;
	if (a[n-1]%2 == 0)
		return tongSoChan(a, n-1) + a[n-1];
	return tongSoChan(a, n-1);
}


int main(){
	int a[MAX];
	int n;
	do
    {
        printf("Nhap so phan tu trong mang: \n");
		scanf("%d", &n);
    } while (n <= 0 || n > MAX);
	
	nhapMang(a, n);
	xuatMang(a, n);
	
	int s = tongSoChan(a, n);
	printf("\nTong cac so chan la: %d", s);
	return 0;
}
