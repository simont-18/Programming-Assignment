#include "GradStudent.h"

namespace College {
    //constructor
    GradStudent::GradStudent():Student() {
        //blank
    }
    
    GradStudent::GradStudent(string _first_name,string _last_name,int _student_ID, char _academicDegree, string _bachelorDegree):Student(_first_name,_last_name,_student_ID) {
        setAcademicDegree(_academicDegree);
        setBachelorDegree(_bachelorDegree);
    }
    
    //destructor
    GradStudent::~GradStudent() {
        //blank
    }
    
    //check to make sure the choice enter is M or D, if not M is the default
    void GradStudent::setAcademicDegree(char _academicDegree) {
        if(_academicDegree == 'M' || _academicDegree == 'm' || _academicDegree == 'D' || _academicDegree == 'd')
            academicDegree = _academicDegree;
        else
            academicDegree = 'M';
    }
    
    //setter function
    void GradStudent::setBachelorDegree(string _bachelorDegree) {
        bachelorDegree = _bachelorDegree;
    }
    
    //getter function
    char GradStudent::getAcademicDegree() const {
        return academicDegree;
    }
    
    string GradStudent::getBachelorDegree() const {
        return bachelorDegree;
    }
    
    //return the info in the following format: "id firstName lastName bachelorDegree academicDegree"
    string GradStudent::getInfo() const {
        return (Student::getInfo() + ' ' + getBachelorDegree() + ' ' + getAcademicDegree());
    }
    
    ostream& operator<<(ostream& out, GradStudent& obj)
    {
        out << obj.getInfo();
        return out;
    }
}
