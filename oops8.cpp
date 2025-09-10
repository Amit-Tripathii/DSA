#include <iostream>
#include <string>
using namespace std;


//In function
// void fun(){
//    static int x=0;
//     cout<<x<<endl;
//     x++;
// }
class A{
    public:
    int x;
    void incx(){
        x=x+1;
    }
};

int main(){
   A obj;
   A obj2;

   obj.x=100;
   obj2.x=200;
   cout<<obj2.x<<endl;
   obj.incx();
    cout<<obj.x<<endl;

    return 0;
}