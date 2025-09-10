#include <iostream>
using namespace std;
class Teacher
{
private:
    double salary;

public:
    // properties
    string name;
    string dept;
    string subject;

    // non paramerized constructor
    Teacher()
    {
        cout << "Hii,I am constructor\n";
        dept = "Computer science";
    }

    // parametrized
    Teacher(string name, string dept, string subject, double salary)
    { // object ki property and parameter
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // copy constructor
    Teacher(Teacher &orgObj)
    {
        cout << "I am custom copy constructor" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    // methods
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    // // setter
    // void setSalary(double sal)
    // {
    //     salary = sal;
    // }
    // // getter
    // double getSalary()
    // {
    //     return salary;
    // }
    void getInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Subject:" << subject << endl;
    }
};
//data hiding 
class Account
{
private:
    double balance;
    string password;

public:
    string accountID;
    string username;
};
int main()
{
    // Teacher t1; //constructor called
    // t1.name = "Shraddha";
    // t1.subject = "C++";

    // t1.setSalary(25000);
    // cout << t1.name << endl;
    // cout << t1.getSalary() << endl;
    // cout<<t1.dept<<endl;

    Teacher t1("Shraddha", "Computer science", "c++", 25000);
    t1.getInfo();

    // Teacher t2(t1); // default copy constructor
    // t2.getInfo();

      Teacher t2(t1); // custom  copy constructor invoke
    t2.getInfo();
    return 0;
}