
#include <iostream>
using namespace std;
#include<string>

//Base class
class Animal {
    
private:
   int lifespan=2;
   
protected:
 int Age=10;
    
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

class Dog : public Animal {
public:
    Dog(string str1, int x) : Animal(str1, x) {}
    
    void sound()
    {
        cout<<"Woof"<<endl;
    }
    
    
    void age()
    {
        cout<<Age<<endl;
        
    }
};

int main() {
    Dog D1("J", 4);
    D1.sound();
    D1.age();
    cout<<D1.lifespan<<endl;

    
}

/*sol.cpp: In function ‘int main()’:
sol.cpp:50:14: error: ‘int Animal::lifespan’ is private within this context
   50 |     cout<<D1.lifespan<<endl;
      |              ^~~~~~~~
sol.cpp:10:8: note: declared private here
   10 |    int lifespan=2;
      |        ^~~~~~~~*/
