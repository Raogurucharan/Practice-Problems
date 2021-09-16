#include <iostream>
using namespace std;

class Shape {
   public:
      virtual int Area() = 0; // Pure virtual function is declared as follows.
      // Function to set width.
      void setWidth(int w) {
         width = w;
      }
    
      void setHeight(int h) {
         height = h;
      }
   
   protected:
      int width;
      int height;
};

class Rectangle: public Shape {
   public:
      int Area() { 
         return (width * height); 
      }
};
// A triangle is a shape too; it inherits shape.
class Triangle: public Shape {
   public:
      // Triangle uses the same Area function but implements it to
      int Area() { 
         return (width * height)/2; 
      }
};

int main() {
  Rectangle R;
  Triangle T;
  R.setWidth(5);
  R.setHeight(10);
  T.setWidth(20);
  T.setHeight(8);
  cout << "The area of the rectangle is: " << R.Area() << endl;
  cout << "The area of the triangle is: " << T.Area() << endl;
}
