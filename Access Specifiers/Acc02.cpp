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
=>private va protected chi duoc truy cap trong class Person khong goi duoc ra ben ngoai
=>> Ta co the gan gia tri cua bien private cho gia tri co kieu du lieu tuong ung cua cua ham public void temp() va truy cap duoc gia tri cua cac
bien private binh thuong. (ham temp la public)
*/
	return 0;
}
