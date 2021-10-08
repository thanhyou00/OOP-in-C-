#include<bits/stdc++.h>
using namespace std;

// Encapsulation - Tinh dong goi

class Student {
	private :
	string name = "thanhyou00";
	
	public : 
	// Setter
    void setName(string name) {
    	this->name = name;
    }
    // Getter
    string getName() {
    	return name;
    }	
};

int main() {
	Student st;
	cout<<st.getName();
	return 0;
}

