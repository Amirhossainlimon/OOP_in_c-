#include <iostream>
using namespace std;

// Class for Student
class Student {
public:  // Access specifier (public, private, protected)

    //Member data
    string name;
    int age;

   // Member function (method)
    void introduce() {
        cout << "Hi, I am " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Student s1;         // Object 1
    s1.name = "Amir";
    s1.age = 21;
    s1.introduce();

    Student s2;         // Object 2
    s2.name = "Nur";
    s2.age = 21;
    s2.introduce();

    return 0;
}
