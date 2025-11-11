#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here



class Student: public Person{
    protected:
    string major;
    int yearLevel;
    public:
    void display(){}
};









#endif
