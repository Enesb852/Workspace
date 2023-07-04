#include <iostream>

using namespace std;

void karesiniHesapla(int sayi)
{
    sayi =sayi*sayi;
    cout << "Sayinin karesi: " << sayi;
}

int main()
{
    int value;
    cout << "Enter a number: ";
    cin>>value;

    karesiniHesapla(value);

    cout<<endl;
    
    return 0;
}
