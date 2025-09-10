#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    // destructor
    ~Student()
    {
        cout << "Hii I delete everything";
        delete cgpaPtr;
    }
    Student(Student &orgObj)
    {
        this->name = orgObj.name;
        // deep copy
        cgpaPtr = new double;
        *cgpaPtr = *orgObj.cgpaPtr;
    }

    void getInfo()
    {
        cout << "Name:" << name << endl;
        cout << "CGPA:" << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("Rahul kumar", 8.9); // rahul kumar
    Student s2(s1);                 // neha kuamr
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.getInfo();
}