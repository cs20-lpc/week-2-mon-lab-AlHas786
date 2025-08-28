#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student();   
    ~Student();  

    void setName(string n);
    void setAge(int a);

    string getName() const;
    int getAge() const;
};

#endif
