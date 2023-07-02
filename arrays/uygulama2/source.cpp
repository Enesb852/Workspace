#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Dizi boyutunu belirleyiniz: ";
    cin>>n;

    int* dizi =  new int[n]; // Dinamik bir dizi oluşturduk
    
    for(int sayac = 0; sayac < n; sayac++)
    {
        cout << "[" << sayac << "]: ";
        cin>>dizi[sayac];
    }

    for(int sayac = 0; sayac < n; sayac++)
    {
        cout << dizi[sayac] << " ";
    }

    // Dinamik olarak ayrılan belleği serbest bırakma
    delete[] dizi;

    return 0;
}