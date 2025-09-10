#include<iostream>
#include<string>
using namespace std;

//Function Overriding

// class Parent{
//     public:
//    void getInfo(){
//         cout<<"Parent class\n";
//     }
// };

// class Child:public Parent{
// public:
//   void getInfo(){
//         cout<<"Child class\n";
//     }

// };

// int main(){
//     Parent c1;
//     c1.getInfo();
// }

//Virtual Functions
class Parent{
    public:
   void getInfo(){
        cout<<"Parent class\n";
    }
    virtual void hello(){
        cout<<"Hello from parent\n";
    }
};

class Child:public Parent{
public:
  void getInfo(){
        cout<<"Child class\n";
    }
    void hello(){
        cout<<"Hello from child\n";
    }

};

int main(){
    Child c1;
    c1.hello();
    return 0;
}