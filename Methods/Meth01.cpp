#include<bits/stdc++.h>
using namespace std;

// Methods

class Rectangle {
	public : 
	int width;
	int height;
	
	double getArea(int width, int height){
		return width*height;
	}; // Kien thuc lien quan den functions (ham)
	
};

int main() {
	Rectangle rec;
	cout<<"Rectangle : "<<rec.getArea(5,10)<<endl;	
	cout<<"Rectangle : "<<rec.getArea(10,20)<<endl;
	return 0;
}

