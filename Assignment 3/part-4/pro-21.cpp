#include <iostream>  
using namespace std;  
  
double calculateArea(double sqrSide) {  
    return sqrSide * sqrSide;  
}  
  
double calculateArea(double rectLength, double rectWidth) {  
    return rectLength * rectWidth;  
}  
  
int main() {  
    double sqrSide, rectLength, rectWidth;  
      
    cout << "Enter the side of the square: ";  
    cin >> sqrSide;  
      
    cout << "Enter the length and width of the rectangle: ";  
    cin >> rectLength >> rectWidth;  
      
    cout << "Area of Square: " << calculateArea(sqrSide) << endl;  
    cout << "Area of Rectangle: " << calculateArea(rectLength, rectWidth) << endl;  
      
    return 0;  
}
