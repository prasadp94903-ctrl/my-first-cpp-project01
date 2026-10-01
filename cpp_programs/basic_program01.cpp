#include <iostream>
using namespace std;

class Siva {
private:
    string name;

public:
    Siva(string n) {
        name = n;
    }

    Siva(const Siva &s) {
        name = s.name;
    }

    void display() {
        cout << "name is: " << name << endl;
    }
};

int main() {
    Siva s1("prasad");
    s1.display();

    Siva s2 = s1;
    s2.display();

    return 0;
}
}