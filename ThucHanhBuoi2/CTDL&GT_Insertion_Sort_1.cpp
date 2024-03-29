//https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp

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
