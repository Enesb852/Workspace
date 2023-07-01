#include <iostream>

using namespace std;

int main()
{
    // bellekte bir tam sayı için yer ayırma
    int* ptr;
    ptr=new int;

    cout << *ptr << endl; // kontrol 1

    // bellekte tahsis edilen yerleri kullanma
    *ptr=10;

    cout << *ptr << endl; // kontrol 2

    // Bellekten tahsis edilen yerleri serbest bırakma
    delete ptr;
    
    cout << *ptr << endl; // kontrol 3
    
    return 0;
}