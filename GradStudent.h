#ifndef __Programming_Assignment__GradStudent__
#define __Programming_Assignment__GradStudent__

#include <iostream>
#include <sstream>
#include "Student.h"
using namespace College;

namespace College {
    class GradStudent:public Student{
    public:
        //constructor
        GradStudent();
        GradStudent(string _first_name,string _last_name,int _student_ID, char _academicDegree, string _bachelorDegree);
        //destructor
        ~GradStudent();
        //getter and setter functions
        void setAcademicDegree(char _academicDegree);
        void setBachelorDegree(string _bachelorDegree);
        char getAcademicDegree() const;
        string getBachelorDegree() const;
        string getInfo() const;
        
    private:
        //private data member variables
        char academicDegree;
        string bachelorDegree;
    };
}

#endif
