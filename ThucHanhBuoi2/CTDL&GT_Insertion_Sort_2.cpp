//https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp
#include <stdio.h>

void Insertion_Sort(int a[], int n){	
	int pos, x;
	for(int i = 1; i < n; i++){ 
		x = a[i]; 
		pos = i;
		while(pos > 0 && x < a[pos-1]){
			a[pos] = a[pos-1];	
			pos--;
		}
		a[pos] = x;
	}
}

int main(){
	int a[5] = {1000, -3, 80, 5, 1};
	Insertion_Sort(a, 5);
	printf("Mang sau khi sap xep: ");
	for(int i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
