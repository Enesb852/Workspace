#include <iostream>
#include <string>

using namespace std;

struct person
{
    string name;
    string city;
    int age;
};

int main()
{
    person list[2];

    for(int sayac=0; sayac < 2; sayac++)
    {
        cout << "Name: ";
        cin>>list[sayac].name;

        cout << "City: ";
        cin>>list[sayac].city;

        cout << "Age: ";
        cin>>list[sayac].age;

        cout << endl;
    }
    
    for(int sayac=0; sayac < 2; sayac++)
    {
        cout << "Name: "<<list[sayac].name << endl;
        cout << "City: "<<list[sayac].city << endl;
        cout << "Age: " <<list[sayac].age << endl;

        cout << endl;
    }

    return 0;
}