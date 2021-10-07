#include<bits/stdc++.h>
using namespace std;

// Access Specifiers - Pham vi truy cap

class Person {
	
	int age = 21;
	public:string name = "thanhyou00";
	private:bool gender = true;	
	
	public : void temp(int temp_age, bool temp_gender) {
		age = temp_age;
		gender = temp_gender;
		cout<<age<<endl;
		cout<<gender<<endl;
	};
};

int main() {
	Person ps;
	cout<<ps.name;
//	cout<<ps.age; => Bao loi khi chay
//	cout<<ps.gender; => Bao loi khi chay	
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

