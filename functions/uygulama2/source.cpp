#include <iostream>

using namespace std;

void diziyiYazdir(int dizi[], int boyut)
{
   for(int sayac=0;sayac < boyut; sayac++)
    {
        cout << dizi[sayac] << " ";
    }

    cout << endl; 
}

int main()
{
    int dizi[5]={0,1,2,3,4};
    int dizi2[3]={0,1,2};

    diziyiYazdir(dizi, 5);
    diziyiYazdir(dizi2, 3);

    return 0;
}