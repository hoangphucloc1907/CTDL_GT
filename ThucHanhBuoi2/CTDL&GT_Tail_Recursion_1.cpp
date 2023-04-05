#include <stdio.h>

int TinhTong(long x, long sum = 0) {
    if (x == 0) {
        return sum;
    } else {
        return TinhTong(x - 1, sum + x);
    }
}

int main(){
	printf("Tong la: %ld",TinhTong(5));
	return 0;
}
