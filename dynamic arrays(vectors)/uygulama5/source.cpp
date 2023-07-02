#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> v;
    float value=0;
    
    while(value != -1)
    {
        cout << "Bir sayi giriniz (durdurmak icin -1): ";
        cin>>value;
        v.push_back(value);
    }

    v.pop_back(); // vektöre girilen son değeri kaldırır.

    cout << v.back() << endl; // vektörün son elemanına ulaşalım
    cout << v.size() << endl; // vektörün boyutunu öğrenelim

    for(int sayac = 0; sayac<v.size(); sayac++)
    {
        cout << v[sayac] << " ";
    }

    return 0;
}