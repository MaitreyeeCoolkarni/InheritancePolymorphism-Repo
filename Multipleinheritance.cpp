#include <iostream>
using namespace std;
#include<string>

//Base class
class Animal {
public:
    string Name;
    int legs;

    Animal(string str1, int x) {
        Name = str1;
        legs = x;
    }

    void sound() {
        cout << "Animal sound";
    }
};

class Mammal {
public:

   int middlebones=3;
 
};





class Dog : public Animal,public Mammal{
public:
    Dog(string str1, int x) : Animal(str1, x) {}
    
    void sound()
    {
        cout<<"Woof"<<endl;
    }
  
    
};

int main() {
    Dog D1("J", 4);
    D1.sound();
    cout<<D1.middlebones<<endl;
    
}
/*Woof
3*/
