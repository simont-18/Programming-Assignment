#ifndef __Programming_Assignment__Student__
#define __Programming_Assignment__Student__

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    //declaring a static int variable numberOfStudents
    static int numberOfStudents;
    
    //constuctors
    Student();
    Student(string,string,int);
    
    //public member functions
    void setall(string,string,int);
    int getID();
    string getName();
    
private:
    //private member attributes
    int ID;
    string fName, lName;
};
#endif
