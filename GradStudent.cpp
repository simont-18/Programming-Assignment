#include "GradStudent.h"

namespace College {
    GradStudent::GradStudent():Student() {
        //blank
    }
    
    GradStudent::GradStudent(string _first_name,string _last_name,int _student_ID, char _academicDegree, string _bachelorDegree):Student(_first_name,_last_name,_student_ID) {
        setAcademicDegree(_academicDegree);
        setBachelorDegree(_bachelorDegree);
    }
    
    GradStudent::~GradStudent() {
        //blank
    }
    
    void GradStudent::setAcademicDegree(char _academicDegree) {
        if(_academicDegree == 'M' || _academicDegree == 'm' || _academicDegree == 'D' || _academicDegree == 'd')
            academicDegree = _academicDegree;
        else
            academicDegree = 'M';
    }
    
    void GradStudent::setBachelorDegree(string _bachelorDegree) {
        bachelorDegree = _bachelorDegree;
    }
    
    char GradStudent::getAcademicDegree() const {
        return academicDegree;
    }
    
    string GradStudent::getBachelorDegree() const {
        return bachelorDegree;
    }
    
    string GradStudent::getInfo() const {
        return (Student::getInfo() + ' ' + getBachelorDegree() + ' ' + getAcademicDegree());
    }
}
