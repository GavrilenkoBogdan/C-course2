#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    string mland;
    
};

void printold(Person* person)
{
    cout << person->name << " is " << person->age << " years old" << endl;
}
void printmland(Person* person)
{
    cout << person->name << " from " << person->mland << endl;
}

int main()
{
    Person person;
    person.name = "Harry";
    person.age = 23;
    person.mland = "Ukraine";
    cout << "Meet " << person.name << endl;
    printold(&person);
    printmland(&person);
    
    return 0;
}