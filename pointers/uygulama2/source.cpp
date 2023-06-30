#include <iostream>

using namespace std;

int main()
{
    int sayi=13;
    
    int* ptr; // ptr isimli bir pointer değişkeni oluşturalım
    ptr=&sayi; // pointer "sayi" değişkeninin bellek adresini saklasın
    
    cout << *ptr << endl; // çıktı: 13

    *ptr=27; /*işaretçi ile bellekteki veriye "*" kullanarak yani (*ptr) ile ulaşabiliriz
               işaretçiler, bellekteki verilere doğrudan erişim sağlayan adresleri tutan değişkenlerdir.   */ 

    cout << *ptr << endl; // çıktı: 27

    return 0;
}