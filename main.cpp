#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person :: display(){
        cout<< "Major: "major << endl;
        cout<< "Year: "yearLevel << endl;
    }







// ==================== Student Class Implementation ====================
Student :: display(){
        cout<< "Major: "major << endl;
        cout<< "Year: "yearLevel << endl;
    }





// ==================== Instructor Class Implementation ====================
Instructor :: display(){
        cout<< "Department: "department << endl;
        cout<< "Experience: "exYears << endl;
    }





// ==================== Course Class Implementation ===================
Course :: addStudent(const Student& s){
       s = Student* student;
    }
Course :: displayCourseInfo{
        cout<< "Course: " courseCode "-" courseName<<endl;
        cout<<"Max students:" maxStudents <<endl;
        cout<< "Currently enrolled:" Student.name "(ID:" Student.id ")" <<endl;
        cout<<"Instructor Info:" << endl;
        cout<<"Name: " Instructor.name <<endl;
        cout<<"Department: " Instructor.department<<endl;
        cout<<"Experiencxe: " Instructor.exYears<<endl;
        cout<<"Student Info:" << endl;
        cout<< "Year: " Student.yearLevel << endl;
        cout<< "Major: " Student.major << endl;
        
    }





// ==================== Main Function ====================
int main() {
   
    std::cout<<"Hello World";
    Student s = new Student();
    Instructor i = new Instructor();
    Course c = new Course();
   Student* s2 = new Student()l;
   c.addStudent(Student* s2);
   c.displayCousreInfo():
      delete s2;
    
    
    return 0;
}
