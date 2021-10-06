#include<bits/stdc++.h>
using namespace std;

// Class and Objects 

class Person {
	public :
	string name;
	int age;
	bool gender = true;
};

int main() {
	Person ps;
	ps.name = "thanhyou00";
	ps.age = 21;
	cout<<"Name : "<<ps.name<<endl;
	cout<<"Age : "<<ps.age<<endl;
	cout<<"Gender : "<<ps.gender<<endl;
/*
* Giai thich :
- Person : Ten class / objects
- public : Pham vi truy cap
- name,age,gender : Cac thuoc tinh cua doi tuong - Objects
*/	
	return 0;
}

