#include<bits/stdc++.h>
using namespace std;

class Shape {
   public:
      virtual int Area() = 0; // Khai bao ham thuan ao bang 0
      virtual void Hello() =0;
      void setWidth(int width) {
         this->width = width;
      }
      void setHeight(int height) {
         this->height = height;
      } 
   protected:
      int width;
      int height;
};
class Rectangle: public Shape { // Rectangle ke thua tu Shape
   public:
      int Area() { 
         return (width * height); // Rectangle thuc thi (implement) phuong thuc Area() tu Shape
      }
      void Hello() {
	     cout<<"Hello C++"<<endl;
	  }	  
};
int main() {
  Rectangle R;
  R.setWidth(5);
  R.setHeight(10);
  cout <<R.Area() << endl;
/*
* Notes :
- Tat ca cac class ke thua tu Shape phai thuc thi tat ca cac phuong thuc virtual
- Kieu du lieu tra ve cua ham virtual phai thong nhat (consistent) khong duoc thay doi trong tat ca cac class
- Tat ca cac phuong thuc virtual luon luon phai khai bao bat buoc bang 0
*/  
  return 0;
}
