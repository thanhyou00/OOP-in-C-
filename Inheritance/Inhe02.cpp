#include<bits/stdc++.h>
using namespace std;

// Multilevel Inheritance - Ke thua nhieu tang

class Parent {
	protected : string parent_name = "thanhyou00";
};

class Child : public Parent { // Class Child ke thua thuoc tinh name cua class Parent
	protected : string child_name = parent_name;
};

class Grandchildren : public Child { // Class Grandchildren ke thua lai thuoc tinh name cua class Child
	public : void temp() {
		string temp_name = child_name;
		cout<<temp_name<<endl;
	};
};
int main() {
	Grandchildren gr;
	gr.temp();
	return 0;
}

