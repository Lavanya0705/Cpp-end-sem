#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Superhero : public Person {
public:
    string superpower;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Superpower: " << superpower << endl;
    }
};

int main() {
    Superhero s;

    s.name = "Superman";
    s.age = 30;
    s.superpower = "Flying";

    s.display();

    return 0;
}
