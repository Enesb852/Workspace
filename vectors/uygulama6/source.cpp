#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> v;
    
    float value;
    int toplam=0;
    while(true)
    {
        cout << "Bir deger giriniz: (durdurmak icin -1 degerini giriniz): ";
        cin>>value;

        v.push_back(value);

        if(value==-1)
        {v.pop_back();
            break;}     
        
        toplam+=value;
    }

    cout << "v(boyut): " << v.size() << endl;
    cout << "Girilen degerlerin toplami: " << toplam;

    return 0;
}