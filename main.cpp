#include <iostream> 
#include <string> 
#include "Student.h"
#include "UndergradStudent.h"
#include "GradStudent.h"
#include "OperationOverloading.h"
using namespace std;
using namespace College;

int main() {
    Student *list[3];
    list[0] = new Student("Ashley","Baily",1000);
    list[1] = new GradStudent("Carol","David",1001,'D',"Liberal Art");
    list[2] = new UndergradStudent("Esther","Green",1002,2);
    
    cout << "Student getInfo()" << endl;
    cout << list[0]->getInfo() << endl;
    cout << list[1]->Student::getInfo() << endl;
    cout << list[2]->Student::getInfo() << endl;
    
    cout << "\nRedefined getInfo()" << endl;
    cout << list[1]->getInfo() << endl;
    cout << list[2]->getInfo() << endl;


    return 0;
}
