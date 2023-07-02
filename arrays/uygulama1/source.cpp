#include <iostream>

using namespace std;

int main()
{
    // Static arrays

    int dizi[5] = {10, 20, 30, 40, 50};

    // for döngüsüyle dizinin tüm elemanlarına ulaşalım
    for(int i = 0; i < 5; i++)
    {
        cout << dizi[i] << " ";
    }
    
    return 0;
}