#ifndef __Programming_Assignment__Student__
#define __Programming_Assignment__Student__

#include <iostream>
#include <string>
using namespace std;

namespace College {
    class Student {
    public:
        //declaring a static int variable numberOfStudents
        static int numberOfStudents;
        
        //constuctors
        Student();
        Student(string _first_name,string _last_name,int _student_ID);
        
        //deconstructor
        virtual ~Student();
        
        //public member functions
        void setall(string _first_name,string _last_name,int _student_ID);
        int getID() const;
        virtual string getInfo() const;
        
    private:
        //private member attributes
        int ID;
        string firstName, lastName;
    };
}
#endif
