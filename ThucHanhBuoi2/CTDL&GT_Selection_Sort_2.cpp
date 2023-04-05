//https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp
#include <stdio.h>


void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Selection_Sort(int a[], int n)
{
	int min; 
	for (int  i = 0; i < n - 1; i++){
		min = i; 
		for(int j = i + 1; j < n; j++)
	   	   if (a[j] < a[min])
		       min = j;
		if (min != i)
	   	   Swap(a[min], a[i]);
	}
}

int main(){
	int a[5] = {3, -3, 80, 5, 1};
	Selection_Sort(a, 5);
	printf("Mang sau khi sap xep: ");
	for(int i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
