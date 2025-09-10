#include <iostream>
using namespace std;
int c=45;
int main(int argc, char const *argv[])
{
    /* code */

   int a, b, c;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    
    c=a+b;
    cout<<"Thesum is"<<c<<endl; 
    cout<<"The global c is"<<::c; 
    return 0;
}