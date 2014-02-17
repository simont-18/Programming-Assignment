//Name: Duy Ta
//Peoplesoft #: 1225688
#include <iostream>
#include <string> 
#include "Student.h"
#include "UndergradStudent.h"
#include "GradStudent.h"
using namespace std;
using namespace College;

int main() {
    //creating an array of 3
    Student *list[3];
    
    //assigning data to the array
    list[0] = new Student("Ashley","Baily",1000);
    list[1] = new GradStudent("Carol","David",1001,'D',"Liberal Art");
    list[2] = new UndergradStudent("Esther","Green",1002,2);
    
    //Student getInfo()
    cout << "Student getInfo()" << endl;
    cout << list[0]->getInfo() << endl;
    cout << list[1]->Student::getInfo() << endl;
    cout << list[2]->Student::getInfo() << endl;
    
    //redefined getInfo()
    cout << "\nRedefined getInfo()" << endl;
    cout << list[1]->getInfo() << endl;
    cout << list[2]->getInfo() << endl;

    return 0;
}
