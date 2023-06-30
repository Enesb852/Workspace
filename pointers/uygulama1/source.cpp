#include <iostream>

using namespace std;

int main()
{
    int sayi = 1337;
    cout << "Degisken degeri: " << sayi << endl;
    cout << "Degisken adresi: " << &sayi << endl; // Değişkenlerin bellek adresi ampersand (&) işareti ile alınır.

    int* ptr; // Pointer tanımlayalım.
    ptr= &sayi; // Tanımladığımız pointer(ptr) sayesinde "sayi" değişkenin bellek adresi saklanabilir.
    cout << "Degisken adresi: " << ptr << endl;
    
    cout << "Degisken degeri: " << *ptr << endl; // Pointer'ı kullanarak bellekteki veriye erişmek için "dereference" operatörü olan "*" kullanılır.
    
    return 0;
}