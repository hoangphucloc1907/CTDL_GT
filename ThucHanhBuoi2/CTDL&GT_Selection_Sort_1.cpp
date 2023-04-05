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


