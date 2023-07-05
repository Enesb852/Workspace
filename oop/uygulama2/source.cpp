#include <iostream>

using namespace std;

class Nokta
{   private:
        int x, y;
    public:
        void degerAta(int _x, int _y)
        {
            x = _x;
            y = _y;
        }

        void ekranaYaz()
        {
            cout << "(" << x << "," << y << ")" << endl;
        }

        bool isOrigin()
        {   return x==0 && y==0; }
};

int main()
{
    Nokta array[5];
    Nokta* ptr;
    ptr = new Nokta[5];

    for(int index=0; index < 5;index++)
    {
        // array[index].degerAta(index, index);
        ptr[index].degerAta(index, index);
    }

    for(int index=0; index < 5;index++)
    {
        // array[index].ekranaYaz();
        ptr[index].ekranaYaz();
    }

    delete[] ptr;
    return 0;
}