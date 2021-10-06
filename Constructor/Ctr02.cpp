#include<bits/stdc++.h>
using namespace std;

// Constructor

class Car {
	public : 
	string brand;
	string color;
	double price;
	
	Car(string brand,string color,double price) { // Constructor 1
		this->brand = brand;
		this->color = color;
		this->price = price;
	};
	Car(double price) { // Constructor 2
		this->price = price;
	};
	
	void toString01() {
		cout<<brand<<" - "<<color<<" - "<<price;
	};
	
	void toString02() {
		cout<<price;
	};
};

int main() {
	Car car01 = Car("FORD","GREEN",800000); // Truyen truc tiep gia tri cho constructor 1
	Car car02 = Car(900000); // Truyen truc tiep gia tri cho constructor 2
	car01.toString01();
	cout<<endl;
	car02.toString02();
	return 0;
}

