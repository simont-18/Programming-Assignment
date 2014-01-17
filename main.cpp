#include <iostream> 
#include <string> 
#include "Student.h"
using namespace std;
//es
int main() {
    Student st1("Hakan", "Haberdar", 1234), st2("Charu", "Hans", 2345), st3("Tarikul", "Islam", 5442), st4;
    cout << "We created " << Student::numberOfStudents << " student objects." << endl;
    cout << st1.getID() << " " << st1.getName() << endl;
    cout << st2.getID() << " " << st2.getName() << endl;
    cout << st3.getID() << " " << st3.getName() << endl; cout << st4.getID() << " " << st4.getName() << endl;
    return 0;
}
