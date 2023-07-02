#include <iostream>

using namespace std;

struct human
{
    string name;
    string city;
    int age;
};

int main()
{
    human propert;
    propert.name = "Enes";
    propert.city = "Hatay";
    propert.age = 17;

    cout << propert.name << endl;
    cout << propert.city << endl;
    cout << propert.age << endl;
    
    return 0;
}