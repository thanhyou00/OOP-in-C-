#include<bits/stdc++.h>
using namespace std;

// Constructor

class Car {
	public : 
	string brand;
	string color;
	double price;
	Car(string brands,string colors,double prices) { // Khoi tao 1 contructor co 3 tham so truyen vao
		this->brand = brands;
		this->color = colors;
		this->price = prices;
	};
	void toString() { // Khoi tao ham in ra cac gia tri cua cac thuoc tinh
		cout<<brand<<" - "<<color<<" - "<<price;
	};
};
int main() {
	Car car = Car("FORD","GREEN",800000);
	car.toString();
/*
* Giai thich :
- this->brand = brands : gan gia tri cua bien tham so brands cho gia tri cua thuoc tinh brand
- Car car = Car("FORD","GREEN",800000) : Khai bao bien car co kieu du lieu la Car va gan truc tiep cac gia tri
tuong ung voi cac kieu du lieu cua tham so cua constructor theo dung thu tu vi tri
* Notes : 
- Car car = Car("FORD","GREEN",800000) => true
- Car car = Car(800000,"FORD","GREEN") => false
=>> Ten cua constructor trung voi ten cua class (Car voi Car)
*/	
	return 0;
}

