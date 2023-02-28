#include <iostream>
using namespace std;

struct Point{
	float x;
	float y;
};

void Nhap(Point &A){
	cout << "Nhap X: ";
	cin >> A.x;
	cout << "Nhap Y: ";
	cin >> A.y;
}

void Xuat (Point A){
	cout << "Toa do diem (x,y) = (" << A.x << "," << A.y << ")";
}

int main(){
	Point A;
	
	Nhap(A);
	Xuat(A);
	
}
