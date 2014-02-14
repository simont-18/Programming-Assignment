#ifndef __Programming_Assignment__UndergradStudent__
#define __Programming_Assignment__UndergradStudent__

#include <iostream>
#include <sstream>
#include "Student.h"
using namespace std;

namespace College {
    class UndergradStudent:public Student{
    public:
        UndergradStudent();
        UndergradStudent(string _first_name,string _last_name,int _student_ID, int _classification);
        ~UndergradStudent();
        void setClassification(int _classification);
        int getClassification() const;
        string getInfo() const;
        
    private:
        int classification;
        string getClassman() const;
    };
}

#endif
