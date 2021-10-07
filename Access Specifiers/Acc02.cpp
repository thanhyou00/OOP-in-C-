#include<bits/stdc++.h>
using namespace std;

// Access Specifiers - Pham vi truy cap

class Person {
	
	int age = 21;
	public:string name = "thanhyou00";
	private : bool gender = true;	
	
	public : 
	void temp() {
		int temp_age;
		bool temp_gender;
		temp_age = age;;
		temp_gender = gender;
		cout<<temp_age<<endl;
		cout<<temp_gender<<endl;
	};
};

int main() {
	Person ps;
	cout<<ps.name<<endl;
	ps.temp();	
/*
* Giai thich :
-  int age : Khong khai bao gi thi mac dinh default la private
* Notes : Co 4 kieu pham vi truy cap
- default => mac dinh la private
- private
- public
- protected
=>> private va protected chi duoc truy cap trong class Person khong goi duoc ra ben ngoai
*/
	return 0;
}
