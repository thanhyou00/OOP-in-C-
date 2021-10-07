#include<bits/stdc++.h>
using namespace std;

// Inheritance - Tinh ke thua

class Parent { // Class cha
	protected : int age;
};

class Child : public Parent { // Class con ke thua tu class cha - Don ke thua
	public : void temp(int temp_age) {
		age = temp_age;
		cout<<age<<endl;
	};
};

int main() {
	Child ch;
	ch.temp(21);
/*
* Notes : 
- private va protected deu dung duoc khi su dung bang cach truy xuat theo ham public
- protected va public co the su dung duoc ke thua tu lop cha de truy xuat cac gia tri va phuong thuc
- private khong su dung duoc khi ke thua class 
*/	
	return 0;
}

