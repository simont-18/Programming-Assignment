#ifndef __Programming_Assignment__OperationOverloading__
#define __Programming_Assignment__OperationOverloading__

#include "Student.h"
#include "GradStudent.h"
#include "UndergradStudent.h"
#include <iostream>

namespace College{
    //overloading "<<" for GradStudent
    ostream& operator<<(ostream& out, GradStudent& obj)
    {
        out << obj.getInfo();
        return out;
    }
    
    //overloading "<<" for UndergradStudent
    ostream& operator<<(ostream& out, UndergradStudent& obj)
    {
        out << obj.getInfo();
        return out;
    }
}

#endif
