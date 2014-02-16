#ifndef __Programming_Assignment__UndergradStudent__
#define __Programming_Assignment__UndergradStudent__

#include <iostream>
#include <sstream>
#include "Student.h"
using namespace std;

namespace College {
    class UndergradStudent:public Student{
    public:
        //constructor
        UndergradStudent();
        UndergradStudent(string _first_name,string _last_name,int _student_ID, int _classification);
        //destructor
        ~UndergradStudent();
        //getter and setter function
        void setClassification(int _classification);
        int getClassification() const;
        string getInfo() const;
        
    private:
        //private data member variable
        int classification;
        //private member function
        string getClassman() const;
    };
}

#endif
