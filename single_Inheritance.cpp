#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;
    person(){
    }
};


class student: public person{
public:
    int roll;
    void getinfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Roll: "<<roll<<endl;

    }


};

int main(){
student s1;
s1.name="Limon";
s1.age=21;
s1.roll=10;

s1.getinfo();

return 0;
}
