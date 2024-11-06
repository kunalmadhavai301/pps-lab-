#include <iostream> 
using namespace std;
class Animal { 
public: 
virtual void speak() const { 
cout << "Some generic animal sound" << endl; 
} 
virtual ~Animal() {} 
}; 
class Dog : public Animal { 
public: 
void speak() const override { 
cout << "Woof!" << endl; 
} 
}; 
class Cat : public Animal { 
public: 
void speak() const override { 
cout << "Meow!" << endl; 
} 
}; 
void makeAnimalSpeak(const Animal* animal) { 
animal->speak(); 
} 

int main() { 
Dog myDog; 
Cat myCat; 
Animal* animal1 = &myDog; 
Animal* animal2 = &myCat; 
makeAnimalSpeak(animal1); 
makeAnimalSpeak(animal2); 
return 0; 
} 
