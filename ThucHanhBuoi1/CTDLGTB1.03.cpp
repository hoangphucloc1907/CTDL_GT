/*
bai3  
       X(0) = 1
       Y(0) = 0
       X(n) = x(n � 1) + y(n � 1) (n > 0)
       Y(n) = 3 * x(n � 1) + 2 * y(n � 1) (n > 0)
*/

#include<stdio.h>
#include<conio.h>

long tinhXn(int);
long tinhYn(int);

long tinhXn(int n)
{
    if(n == 0)
        return 1;
    return tinhXn(n - 1) + tinhYn(n - 1);
}

long tinhYn(int n)
{
    if(n == 0)
        return 0;
    return 3*tinhXn(n - 1) + 2*tinhYn(n - 1);
}
int main()
{
    int n;
    printf("Nhap n: "); 
	scanf("%d", &n);

    long kq1 = tinhXn(n);
    long kq2 = tinhYn(n);

    printf("\nX(n) = %d, Y(n) = %d", kq1, kq2);

    return 0;
}
