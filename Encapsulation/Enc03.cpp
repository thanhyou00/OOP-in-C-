#include<bits/stdc++.h>
using namespace std;

class Student {
	private : string name ;
	int age;
	
	public : Student () { // Constructor khong co tham so
	
	};
	
	public : Student (string name, int age) { // Constructor co tham so
		this->name = name;
		this->age = age;
	}; 
	
	public : 
    void setName(string name) { // Setter
    	this->name = name;
    }
    string getName() { // Getter
    	return name; // Tra ve gia tri cua bien name
    }	
    
    void setAge(int age) {
		this->age = age;
	}
	int getAge() {
		return age; // Tra ve gia tri cua bien age
	}  
	
	void toString() {
		cout<<"From Coding to Life !";
	}
};
int main() {
	Student st = Student("thanhyou00",21); // Truyen gia tri truc tiep vao constructor ben ngoai class
	Student st01 = Student();
	cout<<"Name : "<<st.getName()<<endl;
	cout<<"Age : "<<st.getAge()<<endl;
	st01.toString();
	return 0;
}
