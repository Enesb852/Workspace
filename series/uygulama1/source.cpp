#include <iostream>

using namespace std;

int main()
{
    int myArray[5] = {10, 20, 30, 40, 50};

    // for döngüsüyle dizinin tüm elemanlarına ulaşalım
    for(int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    
    return 0;
}