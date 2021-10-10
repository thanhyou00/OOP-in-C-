#include<bits/stdc++.h>
using namespace std;

// Interface

class IShape { // Khai bao 1 interface
	public : 
	virtual ~IShape(){}; // Ham huy ao (virtual destructor)
	virtual void HelloInterface() = 0;
	virtual void PrintName() = 0;
};

class Rectangle : IShape {
	public : 
		void HelloInterface() {
			cout<<"Hello Interface !"<<endl;
		};
		void PrintName() {
			cout<<"I'm thanhyou00"<<endl;
		};
		void PrintAge() {
			cout<<"I'm 21 years old"<<endl;
		};
};

int main() {
	Rectangle rt;
	rt.HelloInterface();
	rt.PrintName();
	rt.PrintAge();
	return 0;
}

