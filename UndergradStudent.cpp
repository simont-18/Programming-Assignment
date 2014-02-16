#include "UndergradStudent.h"

namespace College {
    //constructor
    UndergradStudent::UndergradStudent():Student() {
        //blank
    }
    
    UndergradStudent::UndergradStudent(string _first_name,string _last_name,int _student_ID, int _classification):Student(_first_name,_last_name,_student_ID) {
        setClassification(_classification);
    }
    
    //destructor
    UndergradStudent::~UndergradStudent() {
        //blank
    }
    
    //check to make sure the classification is in rage of 1 to 4, otherwise it is set to 1 (default)
    void UndergradStudent::setClassification(int _classification) {
        if(_classification >= 1 || _classification <= 4)
            classification = _classification;
        else
            classification = 1;
    }
    
    //getter
    int UndergradStudent::getClassification() const{
        return classification;
    }
    
    //return info in the following format: "id firstName lastName classification"
    string UndergradStudent::getInfo() const {
        return (Student::getInfo() + ' ' + getClassman());
    }
    
    //return classification in string
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