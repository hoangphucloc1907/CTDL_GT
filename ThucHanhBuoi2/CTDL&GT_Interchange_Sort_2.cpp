//https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp
#include <stdio.h>

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Interchange_Sort(int a[], int n){	
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
	        if(a[i] > a[j])  
		        Swap(a[i], a[j]);
		}
	}
}

int main(){
	int a[5] = {3, -2, 80, 5, 1};
	Interchange_Sort(a, 5);
	printf("Mang sau khi sap xep: ");
	for(int i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	return 0;
}

