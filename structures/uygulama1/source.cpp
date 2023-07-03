#include <iostream>

using namespace std;

struct person
{
    string name;
    string city;
    int age;
};

int main()
{
    person properties;
    properties.name = "Enes";
    properties.city = "Hatay";
    properties.age = 17;

    cout << properties.name << endl;
    cout << properties.city << endl;
    cout << properties.age << endl;
    
    return 0;
}