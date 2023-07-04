#include <iostream>
#include <string>

using namespace std;

class cat{
private:
    int age;
    string name;
public:
    cat(int _age, string _name)
    {
        age = _age;
        name = _name;
    }

    void miyavla() {
        cout << name << " miyavladi!" << endl;
    }
};

int main()
{
    cat my_Cat(17,"minnos");
    
    my_Cat.miyavla();
    
    return 0;
}