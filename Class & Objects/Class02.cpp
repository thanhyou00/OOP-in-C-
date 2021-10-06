#include<bits/stdc++.h>
using namespace std;

// Multiple Objects

class Person {
	public : 
	string name;
	int age;
	bool gender;	
};

int main() {
	Person ps01, ps02;
	// Nhap gia tri cho cac thuoc tinh cua ps01
	ps01.name = "thanhyou00";
	ps01.age = 21;
	ps01.gender = true;
	// Nhap gia tri cho cac thuoc tinh cua ps02
	ps02.name = "thanhyou01";
	ps02.age = 22;
	ps02.gender = false;
	// In ra man hinh
	cout<<"Name : "<<ps01.name<<", "<<"age : "<<ps01.age<<", "<<"gender : "<<ps01.gender<<endl;
	cout<<"Name : "<<ps02.name<<", "<<"age : "<<ps02.age<<", "<<"gender : "<<ps02.gender<<endl;
/*
* Giai thich :
- Person : La 1 objects (doi tuong) co cac thuoc tinh (thong tin) : name-ten, age-tuoi, gender-gioi tinh
- ps01 : La 1 specific objects (doi tuong cu the) co cac thuoc tinh (thong tin) : name-thanhyou00, age-21, gender-true
- ps02 : La 1 specific objects (doi tuong cu the) co cac thuoc tinh (thong tin) : name-thanhyou01, age-22, gender-false
*/	
	return 0;
}

