#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
    float marks;
public:
    void setMarks(float m) {
        marks = m;
    }
    void displayStudent() {
        displayPerson();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setPerson("Amit", 20);
    s.setMarks(85.5);
    s.displayStudent();
    return 0;
}