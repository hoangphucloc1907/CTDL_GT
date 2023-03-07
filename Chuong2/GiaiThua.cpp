#include <iostream>
using namespace std;


int giaiThua(long n){
	if (n == 0)
		return 1;
	return n * giaiThua(n-1);
}


int main(){
	long n;
	cout << "Nhap n: ";
	cin >> n;
	cout << n << "! = " << giaiThua(n);
}

