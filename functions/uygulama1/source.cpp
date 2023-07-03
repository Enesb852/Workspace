#include <iostream>

using namespace std;

void karesiniHesapla(int sayi)
{
    sayi =sayi*sayi;
    cout << "Sayinin karesi: " << sayi;
}

void PavelGames()
{
    cout << "merhaba genclik :)";
}

int main()
{
    int value;
    cout << "Enter a number: ";
    cin>>value;

    karesiniHesapla(value);

    cout<<endl;

    PavelGames();
    
    return 0;
}