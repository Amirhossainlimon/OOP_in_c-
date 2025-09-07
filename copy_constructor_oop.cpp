#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;   // private member (cannot be accessed directly outside)

public:
    // Constructor
    Teacher() {
        dept = "Computer Science";   // default value for department
    }

    string name;
    string dept;
    string subject;

    // Member function to change department
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t1;   // Constructor is called here automatically
    t1.name = "Amir Hossain Limon";
    t1.subject = "OOP in C++";

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;  // "Computer Science"
    cout << "Subject: " << t1.subject << endl<<endl;

    cout << "After copy object using constructor: "  << endl;
  Teacher t2(t1);
  cout << "Name: " << t2.name << endl;
    cout << "Department: " << t2.dept << endl;  // "Computer Science"
    cout << "Subject: " << t2.subject << endl;

    return 0;
}
