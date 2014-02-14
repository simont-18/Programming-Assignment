#include "Student.h"
#include <sstream>

namespace College {
    //defining static int variable numberOfStudents
    int Student::numberOfStudents = 0;
    
    //default constructor
    Student::Student() {
        numberOfStudents++;
    }
    
    //overloaded constructor
    Student::Student(string _first_name, string _last_name, int _student_ID) {
        numberOfStudents++;
        setall(_first_name,_last_name,_student_ID);
    }
    
    Student::~Student() {
        //blank
    }
    
    //check variables conditions before assigning them to the private member attributes
    void Student::setall(string _first_name, string _last_name, int _student_ID) {
        if(_student_ID <= 0)
            ID = 1;
        else
            ID = _student_ID;
        firstName = _first_name;
        lastName = _last_name;
    }
    
    //return student ID
    int Student::getID() const {
        return ID;
    }
    
    //return student Info
    string Student::getInfo() const {
        string stringID;
        ostringstream convert;
        convert << ID;
        stringID = convert.str();
        return (stringID + ' ' + firstName + ' ' + lastName);
    }
}