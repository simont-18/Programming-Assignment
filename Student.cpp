#include "Student.h"

//defining static int variable numberOfStudents
int Student::numberOfStudents = 0;

//default constructor
Student::Student() {
    numberOfStudents++;
}

//overloaded constructor
Student::Student(string fn, string ln, int id) {
    numberOfStudents++;
    setall(fn,ln,id);
}

//check variables conditions before assigning them to the private member attributes
void Student::setall(string fn, string ln, int sID) {
    if(sID <= 0)
        ID = 1;
    else
        ID = sID;
    fName = fn;
    lName = ln;
}

//return student ID
int Student::getID() {
    return ID;
}

//return student Name
string Student::getName() {
    return (fName + ' ' + lName);
}