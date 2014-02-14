#include "UndergradStudent.h"

namespace College {
    UndergradStudent::UndergradStudent():Student() {
        //blank
    }
    
    UndergradStudent::UndergradStudent(string _first_name,string _last_name,int _student_ID, int _classification):Student(_first_name,_last_name,_student_ID) {
        setClassification(_classification);
    }
    
    UndergradStudent::~UndergradStudent() {
        //blank
    }
    
    void UndergradStudent::setClassification(int _classification) {
        if(_classification >= 1 || _classification <= 4)
            classification = _classification;
        else
            classification = 1;
    }
    
    int UndergradStudent::getClassification() const{
        return classification;
    }
    
    string UndergradStudent::getInfo() const {
        return (Student::getInfo() + ' ' + getClassman());
    }
    
    string UndergradStudent::getClassman() const {
        switch (classification) {
            case 1:
                return "Freshman";
                break;
            case 2:
                return "Sophomore";
                break;
            case 3:
                return "Junior";
                break;
            case 4:
                return "Senior";
                break;
            default:
                return "Freshman";
                break;
        }
    }
}