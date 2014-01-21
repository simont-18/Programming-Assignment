#include <iostream> 
#include <string> 
#include "Student.h"
using namespace std;

int main() {
    //declaring and defining 4 student object
    Student st1("Hakan", "Haberdar", 1234), st2("Charu", "Hans", 2345),
            st3("Tarikul", "Islam", 5442), st4;
    
    //printing ID and Names of each student object
    cout << "We created " << Student::numberOfStudents << " student objects." << endl;
    cout << st1.getID() << " " << st1.getName() << endl;
    cout << st2.getID() << " " << st2.getName() << endl;
    cout << st3.getID() << " " << st3.getName() << endl;
    cout << st4.getID() << " " << st4.getName() << endl;
    
    return 0;
}
