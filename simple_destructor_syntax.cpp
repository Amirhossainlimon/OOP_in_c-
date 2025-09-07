#include <iostream>
using namespace std;

class Demo {
public:
    // Destructor
    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Demo d; // Destructor will be called automatically at the end of main
    return 0;
}
