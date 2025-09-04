#include <iostream>
using namespace std;
#include<string>

//Base class
class GrandFather {
public:
    string Name;
    int age;
    
    char caste='B';

    GrandFather(string str1, int x) {
        Name = str1;
        age = x;
    }

    void bday() {
        cout << "Grandfathers bday is on 10th August";
    }
};

class Father:public GrandFather {
public:

   Father(string str1, int x) : GrandFather(str1, x) {}
   
   void bday() {
        cout << "fathers bday is on 9th Sep";
    }
    
    
    char birthcity='A';
   
};


class Kid : public Father{
public:
    Kid(string str1, int x) : Father(str1, x) {}
    
    void bday()
    {
        cout<<"Kid's birthday is today"<<endl;
    }
  
    
};

int main() {
    Kid D1("J", 4);
    cout<<D1.birthcity<<endl;
    cout<<D1.caste<<endl;
     D1.bday();
    
    
}

/*
B
Kid's birthday is today*/
