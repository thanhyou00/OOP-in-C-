#include<bits/stdc++.h>
using namespace std;

// Multiple Inheritance - Da ke thua

class Parent {
	protected : string parent_name = "thanhyou00";
};

class Child { 
	protected : bool child_gender = true;
};

class Grandchildren : public Child, public Parent { // 1 class ke thua nhieu class khac nhau
	public : int temp_age = 21;
	public : void temp() {
		string temp_name = parent_name;
		bool temp_gender = child_gender;
		cout<<temp_name<<endl;
		cout<<temp_gender<<endl;
		cout<<temp_age<<endl;
	};
};

int main() {
	Grandchildren gr;
	gr.temp();
	return 0;
}

