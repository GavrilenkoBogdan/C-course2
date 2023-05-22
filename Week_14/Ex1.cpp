#include <iostream>
using namespace std;

class Drawning{
public:
    virtual void draw() = 0;
};

class pictOne : public Drawning {
public:
    void draw() override {
        cout << " /\\\n"
            << "//\\\\\n";
    }
};

class pictTwo : public Drawning {
public:
    void draw() override {
        cout << " /\\\n"
            << "/**\\\n";
    }
};

class pictTree : public Drawning {
public:
    void draw() override {
        cout << " /\\\n"
            << "/++\\\n";
    }
};

int main() {
    Drawning* table[3];
    table[0] = new pictOne();
    table[1] = new pictTwo();
    table[2] = new pictTree();

    for (int i = 0; i < 3; i++) {
        cout << "Drawing " << i + 1 << ":\n";
        table[i]->draw();
    }

    for (int i = 0; i < 3; i++) {
        delete table[i];
    }

    return 0;
}