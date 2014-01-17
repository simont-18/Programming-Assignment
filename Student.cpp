#include "Student.h"

int Student::numberOfStudents = 0;

Student::Student() {
    numberOfStudents++;
}

Student::Student(string fn, string ln, int id) {
    numberOfStudents++;
    setall(fn,ln,id);
}

void Student::setall(string fn, string ln, int sID) {
    if(sID <= 0)
        ID = 1;
    else
        ID = sID;
    fName = fn;
    lName = ln;
}

int Student::getID() {
    return ID;
}

string Student::getName() {
    return (fName + ' ' + lName);
}