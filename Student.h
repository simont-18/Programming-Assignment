#ifndef __Programming_Assignment__Student__
#define __Programming_Assignment__Student__

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Student();
    Student(string,string,int);
    
    static int numberOfStudents;
    
    void setall(string,string,int);
    int getID();
    string getName();
    
private:
    int ID;
    string fName, lName;
};
#endif
