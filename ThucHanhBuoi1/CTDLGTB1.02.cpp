#include <stdio.h>
#include <conio.h>

				
//Tính S(n) = x + x ^ 2 / 2!+ x ^ 3 / 3!+ ... + x^n / N!

float LuyThua(float x , float n){
	if(n == 1)
		return x;
	return LuyThua(x,n-1)*x;
}

 

float GiaiThua(float n){
	if(n == 1)
		return (float)1;
	return GiaiThua(n-1)*n;
}

 
float tinh(float x , float n){
	if(n == 1)
		return x;
	return tinh(x,n-1) + ((LuyThua(x,n-1)*x) / (GiaiThua(n-1)*n));
}


int main(){
	float x;
	int n;
	printf("Nhap x: ");
	scanf("%f", &x);
	printf("Nhap n: ");
	scanf("%d", &n);
	
	float kq = tinh(x,n);
	printf("Ket qua = %.2f", kq);
	return 0;
}
