#include <iostream>

using namespace std;

int main()
{
    int value=3;
    
    int& ref=value;

    cout << value << endl;
    cout << &value << endl;
    
    cout << ref << endl;
    cout << &ref;

    return 0;
}