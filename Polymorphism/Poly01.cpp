#include<bits/stdc++.h>
using namespace std;

// Polymorphism - Tinh da hinh

class Parent {
	protected : 
	string parent_name = "thanhyou00";
	bool parent_gender = true;
};

class Child : public Parent { 
	public : void temp01() {
		bool child_gender = parent_gender;
		cout<<child_gender<<endl;
	};	
};

class Grandchildren : public Parent { 
	public : void temp() {
		string temp_name = parent_name;
		cout<<temp_name<<endl;
	};
};
// =>> Nhieu class khac nhau cung ke thua 1 class
int main() {
	Grandchildren gr;
	Child ch;
	gr.temp();
	ch.temp01();
	return 0;
}

