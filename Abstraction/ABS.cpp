#include<bits/stdc++.h>
using namespace std;

// Abstraction - Tinh truu tuong
#define PI 3.14

class Circle {
	public :
		Circle(float temp = 0) { // Constructor
			perimeter = temp;
		};
		
		void num(float r) {
			perimeter = 2*PI*r;
		};
		
		float getPerimeter() {
			return perimeter;
		};
	
	private :
	float perimeter; // chu vi hinh tron la ( 2*pi*r )
};

int main() {
	Circle cr;
	cr.num(10);
	cout<<cr.getPerimeter();
/* 
* Giai thich : 
- float perimeter : du lu private bi an di (hidden) voi nguoi dung (user)
- void num(float r), float getPerimeter() : khong bi an di voi nguoi dung => nguoi dung phai thong qua phuong thuc da duoc dinh nghia 
de thay doi gia tri cua perimeter.
* Notes :
- Truu tuong hoa: An di nhung chi tiet co ban va chi hien thi nhung chi tiet can thiet ve phia nguoi dung
- Truu tuong hoa la su tach biet giua giao dien nguoi dung (interface) va viec trien khai (implementation)
=> Vi du : Nguoi dung su dung 1 app xem phim tren dien thoai voi nhieu chuc nang khac nhau nhu xem phim, chia se phim,
mua phim , binh luan va gop y ... Nhung nguoi dung khong biet cac chuc nang do duoc thuc hien chi tiet nhu the nao, no hoat dong ra sao,
dua vao dau va lam sao no hien thi duoc len man de nguoi dung tuong tac truc tiep voi app.
*/	
	return 0;
}

