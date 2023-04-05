#include<stdio.h>

int pow(int base,int exponent) {
  if (exponent == 0) {
    return 1;
  }
  return base * pow(base, exponent - 1);
}

int main(){
	printf("%d ", pow(2, 3));
} 

