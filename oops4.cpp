#include <iostream>
#include <string>
using namespace std;
// // Multi-level Inheritance
// class Person
// {
// public:
//     string name;
//     int age;
// };
// class Student : public Person
// {
// public:
//     int rollNo;
// };

// class GradStudent : public Student
// {
// public:
//     string researchArea;
// };

// int main()
// {
//     GradStudent s1;
//     s1.name = "tony stark";
//     s1.researchArea = "quantum physics";

//     cout<<s1.name<<endl;
//     cout<<s1.researchArea<<endl;
// }

// multiple Inheritance

// class Student
// {
// public:
//     string name;
//     int rollNo;
// };
// class Teacher
// {public:
//     string subject;
//     double salary;
// };
// class TA :public Student,public Teacher{

// };

// int main(){
//     TA t1;
//     t1.name="Tony Stark";
//     t1.subject="Engineering";

//     cout<<t1.name<<endl;
//     cout<<t1.subject<<endl;
// }


//Hierarchial Inheritance
class Person{
    public:
    string name;
    int age;
};
class Student:public Person{
    public:
    int rollNo;
};

class Teacher:public Person{
    public:
    string subject;
};

int main(){

}