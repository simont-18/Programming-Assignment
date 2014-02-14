#ifndef __Programming_Assignment__OperationOverloading__
#define __Programming_Assignment__OperationOverloading__

#include "Student.h"
#include "GradStudent.h"
#include "UndergradStudent.h"
#include <iostream>

namespace std {
    ostream& operator<<(ostream& out, GradStudent& obj)
    {
        out << obj.getInfo();
        return out;
    }
    ostream& operator<<(ostream& out, UndergradStudent& obj)
    {
        out << obj.getInfo();
        return out;
    }
}

#endif
