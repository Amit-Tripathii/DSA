#include <iostream>
#include <string>
using namespace std;
// SINGLE Inheritance
class Person
{
public:
    string name;
    int age;

    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    Person()
    {
        cout << "Parent constructor" << endl;
    }

    ~Person()
    {
        cout << "Parent constructor destroyed" << endl;
    }
};

class Student : public Person
{

public:
    int rollNo;
    Student(string name,int age,int rollNo) : Person(name,age)
    {
       this->rollNo=rollNo;
    }
    ~Student()
    {
        cout << "Child constructor destroyed" << endl;
    }
    void getInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Roll No:" << rollNo << endl;
    }
};

int main()
{
    Student s1("Amit kumar",21,27);
    
    s1.getInfo();
}