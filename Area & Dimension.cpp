#include <iostream> 
using namespace std; 
class Rectangle { 
private: 
int length; 
int breadth; 
public: 
Rectangle() { 
length = 0; 
breadth = 0; 
} 
Rectangle(int l, int b) { 
length = l; 
breadth = b; 
} 
int area() { 
return length * breadth; 
} 
void display() { 
cout << "Length: " << length << ", Breadth: " << breadth << endl; 
} 
}; 
int main() { 
Rectangle rect1; 
cout << "Rectangle 1 - "; 
rect1.display(); 
cout << "Area: " << rect1.area() << endl; 
Rectangle rect2(10, 5); 
cout << "\nRectangle 2 - "; 
rect2.display(); 
cout << "Area: " << rect2.area() << endl; 
return 0; 
} 
